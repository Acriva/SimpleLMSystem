#pragma once
#include <string>
#include <vector>

#include "Book.hpp"

class Library {
   public:
    void addBook();
    void listBooks();
    bool borrowBook(const std::string& isbn);
    bool returnBook(const std::string& isbn);

   private:
    std::vector<Book> m_library;
};