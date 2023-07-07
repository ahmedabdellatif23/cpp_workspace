// include guard
#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

class Account
{
private:
    double balance;
    std::string name;
public:
    Account(){
        name = "none";
        balance = 0.0;
    }
    void set_balance(double bal);
    double get_balance();
};



#endif