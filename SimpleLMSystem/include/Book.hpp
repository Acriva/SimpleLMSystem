#pragma once
#include <iostream>
#include <string>
#include <vector>

class Book {
   public:
    Book(const std::string& title, const std::string& author,
         const std::string& isbn);
    enum class Status { Available, Borrowed };
    const std::string& getTitle() const;
    const std::string& getAuthor() const;
    const std::string& getIsbn() const;
    Status getStatus() const;
    void setStatus(Status newStatus);

   private:
    std::string m_title;
    std::string m_author;
    std::string m_isbn;
    Status m_status;
};