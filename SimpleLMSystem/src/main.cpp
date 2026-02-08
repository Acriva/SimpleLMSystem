#include <iostream>

#include "Book.hpp"
#include "Library.hpp"

int main() {
    Library lib;
    int choice;
    while (true) {
        std::cout << "\n1. Add book\n2. List book\n3. Borrow book\n4. Return "
                     "book\n0. Exit\n";
        std::cin >> choice;
        if (choice == 0) break;
        switch (choice) {
            case 1:
                lib.addBook();
                break;
            case 2:
                lib.listBooks();
                break;
            case 3: {
                std::cout << "Please enter the isbn of book" << std::endl;
                std::string isbn;
                std::cin >> isbn;
                lib.borrowBook(isbn);
            }; break;
            case 4: {
                std::cout << "Please enter the isbn of book" << std::endl;
                std::string isbn;
                std::cin >> isbn;
                lib.returnBook(isbn);
            }; break;
            default:
                std::cout << "Invalid choice.\n";
        }
    }
}