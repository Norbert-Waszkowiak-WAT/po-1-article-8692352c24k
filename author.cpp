#ifndef UNTILTED1_AUTHOR_H
#define UNTILTED1_AUTHOR_H
#include <iostream>
#include <string>
class Author{
private: 
    std::string name;
    std::string surname;

public: 
    Author()
    : name(""), surname("") {};
    Author(std::string name, std::string surname)
    : name(name), surname(surname) {};
    std::string getName() {
        return name;
    }
    std::string getSurname() {
        return surname; 
    }
    std::string toString() {
        return name + ' ' + surname;   
    }
    void print() {
        std::cout << name << " " << surname << "\n";
    }
    

};

#endif