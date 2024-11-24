#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include <vector>
#include "author.cpp"
#include "article.cpp"
#include "chapter.cpp"

using namespace std;

class Book {
private:
    string title;
    Author author;
    int publicationYear;
    vector <Chapter> chapters;

public:
    Book()
    : title(""), author(Author()), publicationYear(0), chapters({}) {};

    Book(const string bookTitle, const Author bookAuthor, int year, const vector <Chapter> &bookChapters)
    : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {};

    void addChapter(Chapter &chapter) {
        chapters.push_back(chapter);
    };

    void displayInfo() {
        std::cout << "Skibidi Ohio Rizz Sigma Mostek";
    };

    string getTitle() const {
        return title;
    };

    Author getAuthor() const {
        return author;
    };

    int getPublicationYear() const {
        return publicationYear;
    };

    vector <Chapter> getChapters() {
        return chapters;
    };

};

#endif