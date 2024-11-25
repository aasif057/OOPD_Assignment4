#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>
#include <iostream>

class Author {
private:
    std::string authorName;
    std::string authorAffiliation;

public:
    Author(std::string name, std::string affiliation);
    std::string getName() const;
    std::string getAffiliation() const;
    void display() const;
};

#endif // AUTHOR_H