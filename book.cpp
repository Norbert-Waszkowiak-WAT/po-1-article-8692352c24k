#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include <vector>
#include "author.cpp"
#include "article.cpp"
#include "chapter.cpp"

class Book {
private:
    std::string title;
    Author author;
    int publicationYear;
    std::vector <Chapter> chapters;

public:
    Book()
    : title(""), author(Author()), publicationYear(2023), chapters() {};

    Book(std::string bookTitle, Author bookAuthor, int year, std::vector <Chapter> &bookChapters)
    : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {};

    void addChapter(Chapter &chapter) {
        chapters.push_back(chapter);
    };

    void displayInfo() {
        std::cout << "Skibidi Ohio Rizz Sigma Mostek Gyat";
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

    std::vector <Chapter> Book::getChapters() {
        return chapters;
    };

};

#endif