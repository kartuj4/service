#include "Database.h"
#include <fstream>

void Database::loadUsers() {
    std::ifstream file("users.txt");
    std::string name, email, password;
    while (file >> name >> email >> password) {
        users.push_back(User(name, email, password));
    }
    file.close();
}

void Database::saveUsers() {
    std::ofstream file("users.txt");
    for (const auto& user : users) {
        file << user.getName() << " " << user.getEmail() << "\n";
    }
    file.close();
}

void Database::loadTickets() {
    std::ifstream file("orders.txt");
    std::string movie, session, seat;
    while (file >> movie >> session >> seat) {
        tickets.push_back(Ticket(movie, session, seat));
    }
    file.close();
}

void Database::saveTickets() {
    std::ofstream file("orders.txt");
    for (const auto& ticket : tickets) {
        file << ticket.getMovie() << " " << ticket.getSession() << " " << ticket.getSeat() << "\n";
    }
    file.close();
}

void Database::addUser(User user) {
    users.push_back(user);
    saveUsers();
}

void Database::addTicket(Ticket ticket) {
    tickets.push_back(ticket);
    saveTickets();
}
