#include "Book.hpp"

Book::Book(const std::string& title, const std::string& author,
           const std::string& isbn)
    : m_title(title),
      m_author(author),
      m_isbn(isbn),
      m_status(Status::Available) {}

const std::string& Book::getTitle() const { return m_title; }
const std::string& Book::getAuthor() const { return m_author; }
const std::string& Book::getIsbn() const { return m_isbn; }
Book::Status Book::getStatus() const { return m_status; }
void Book::setStatus(Status newStatus) { m_status = newStatus; }
