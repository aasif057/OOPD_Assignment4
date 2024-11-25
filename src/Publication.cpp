#include "Publication.h"
#include <iostream>

// Constructor to initialize publication details
Publication::Publication(std::string title, std::string venue, int year, std::vector<Author> authorList, std::string doi)
    : publicationTitle(title), publicationVenue(venue), publicationYear(year), authors(authorList), publicationDOI(doi) {}

// Static method to validate that at least one author is from the institute's affiliation
bool Publication::validateAffiliation(const std::vector<Author>& authors) {
    for (const auto& author : authors) {
        if (author.getAffiliation() == "IIIT-Delhi") {
            return true;  // Valid: Author from the institute found
        }
    }
    std::cout << "Error: No author affiliated with IIIT-Delhi.\n";
    return false;
}

// Getter methods
std::string Publication::getTitle() const { return publicationTitle; }
std::string Publication::getVenue() const { return publicationVenue; }
int Publication::getYear() const { return publicationYear; }
std::string Publication::getDOI() const { return publicationDOI; }
std::vector<Author> Publication::getAuthors() const { return authors; }

// Method to display publication details
void Publication::displayPublication() const {
    std::cout << "Title: " << publicationTitle << "\n";
    std::cout << "Venue: " << publicationVenue << "\n";
    std::cout << "Year: " << publicationYear << "\n";
    std::cout << "Authors: ";
    for (size_t i = 0; i < authors.size(); ++i) {
        authors[i].display();
        if (i < authors.size() - 1)
            std::cout << ", ";
    }
    std::cout << "\n";
    if (!publicationDOI.empty())
        std::cout << "DOI: " << publicationDOI << "\n";
}