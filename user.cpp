#include "User.h"

User::User(std::string n, std::string e, std::string p) {
    name = n;
    email = e;
    password = p;
}

std::string User::getName() { return name; }
std::string User::getEmail() { return email; }
bool User::checkPassword(std::string p) { return p == password; }
