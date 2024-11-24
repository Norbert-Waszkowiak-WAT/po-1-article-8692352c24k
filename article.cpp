#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <string>
#include <vector>
#include "author.cpp"

class Article{
private:
    std::string title;
    Author author;
    int publicationYear;
    std::string journal;
public:
    Article()
    : title(""), author(Author()), publicationYear(0), journal("") {};
    
    Article(std::string articleTitle, Author articleAuthor, int year, std::string journalName)
    : title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {};
    
    Article(Article &other)
    : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal) {};

    void displayInfo() {
        std::cout << "Skibidi Mostek"; 
    };

    std::string getTitle() {
        return title;
    };
    Author getAuthor() {
        return author;
    };
    int getPublicationYear() {
        return publicationYear;
    };
    std::string getJournal() {
        return journal;
    };
};

#endif