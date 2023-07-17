// include guard
#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

class Player
{
private:
    /* static var */
    static int num_players;
    std::string name;
    int health;
    int xp;

public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }

    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    /* copy constructor */
    Player(const Player &source);
    /* Destructor */
    ~Player();
    /* static function */
    static int get_num_players();
    friend void display_player(Player &p);
};

#endif