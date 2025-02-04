#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string name;
    std::string email;
    std::string password;
public:
    User(std::string n, std::string e, std::string p);
    std::string getName();
    std::string getEmail();
    bool checkPassword(std::string p);
};

#endif
