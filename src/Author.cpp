#include "Author.h"

// Constructor to initialize author details
Author::Author(std::string name, std::string affiliation) 
    : authorName(name), authorAffiliation(affiliation) {}

// Getter for author name
std::string Author::getName() const { return authorName; }

// Getter for author affiliation
std::string Author::getAffiliation() const { return authorAffiliation; }

// Method to display author information
void Author::display() const {
    std::cout << authorName << " (" << authorAffiliation << ")";
}