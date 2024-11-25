#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <string>
#include <vector>
#include "Author.h"

class Publication {
private:
    std::string publicationTitle;
    std::string publicationVenue;
    int publicationYear;
    std::vector<Author> authors;
    std::string publicationDOI;  // Optional: Digital Object Identifier (DOI)

public:
    Publication(std::string title, std::string venue, int year, std::vector<Author> authorList, std::string doi = "");
    static bool validateAffiliation(const std::vector<Author>& authors);
    std::string getTitle() const;
    std::string getVenue() const;
    int getYear() const;
    std::string getDOI() const;
    std::vector<Author> getAuthors() const;
    void displayPublication() const;
};

#endif // PUBLICATION_H