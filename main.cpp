#include <iostream>
#include "Database.h"

Database db;

void showMenu() {
    std::cout << "1. Реєстрація\n";
    std::cout << "2. Вхід\n";
    std::cout << "3. Купити квиток\n";
    std::cout << "4. Переглянути історію замовлень\n";
    std::cout << "5. Вийти\n";
}

void registerUser() {
    std::string name, email, password;
    std::cout << "Ім'я: ";
    std::cin >> name;
    std::cout << "Email: ";
    std::cin >> email;
    std::cout << "Пароль: ";
    std::cin >> password;

    db.addUser(User(name, email, password));
    std::cout << "Реєстрація успішна!\n";
}

void buyTicket() {
    std::string movie, session, seat;
    std::cout << "Фільм: ";
    std::cin >> movie;
    std::cout << "Сеанс: ";
    std::cin >> session;
    std::cout << "Місце: ";
    std::cin >> seat;

    db.addTicket(Ticket(movie, session, seat));
    std::cout << "Квиток куплено!\n";
}

void viewOrders() {
    std::cout << "Ваші замовлення:\n";
    db.loadTickets();
}

int main() {
    db.loadUsers();
    int choice;
    while (true) {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                std::cout << "Авторизація поки що не реалізована\n";
                break;
            case 3:
                buyTicket();
                break;
            case 4:
                viewOrders();
                break;
            case 5:
                std::cout << "Вихід...\n";
                return 0;
            default:
                std::cout << "Невірний вибір!\n";
        }
    }
}
