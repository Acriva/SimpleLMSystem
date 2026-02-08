#include "Library.hpp"

void Library::addBook() {
    std::string title, author, isbn;
    std::cout << "Please enter title, author and isbn\n";
    std::cin >> title >> author >> isbn;
    m_library.emplace_back(title, author, isbn);
}

void Library::listBooks() {
    for (const auto& book : m_library) {
        std::cout << "Title: " << book.getTitle()
                  << ", Author: " << book.getAuthor()
                  << ", Isbn: " << book.getIsbn() << ", Status: "
                  << ((book.getStatus() == Book::Status::Available)
                          ? "Available"
                          : "Borrowed")
                  << std::endl;
    }
    std::cout << std::endl;
}

bool Library::borrowBook(const std::string& isbn) {
    for (auto& book : m_library) {
        if (book.getIsbn() == isbn) {
            if (book.getStatus() == Book::Status::Available) {
                book.setStatus(Book::Status::Borrowed);
                std::cout << "Success!" << std::endl;
                return true;
            } else {
                std::cout << "The book is already borrowed" << std::endl;
                return false;
            }
        }
    }
    std::cout << "No book found with this ISBN" << std::endl;
    return false;
}

bool Library::returnBook(const std::string& isbn) {
    for (auto& book : m_library) {
        if (book.getIsbn() == isbn) {
            if (book.getStatus() == Book::Status::Borrowed) {
                book.setStatus(Book::Status::Available);
                std::cout << "Return success!" << std::endl;
                return true;
            } else {
                std::cout << "The book hasn't been borrowed" << std::endl;
                return false;
            }
        }
    }
    std::cout << "No book found with this ISBN" << std::endl;
    return false;
}