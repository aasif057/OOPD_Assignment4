#include "PublicationManager.h"
#include <iostream>

// Add a new publication to the database
void PublicationManager::addPublication(const Publication& publication) {
    publicationDatabase.push_back(publication);
}

// Retrieve all publications by a specific author
std::vector<Publication> PublicationManager::getPublicationsByAuthor(const std::string& authorName) const {
    std::vector<Publication> result;
    for (const auto& publication : publicationDatabase) {
        for (const auto& author : publication.getAuthors()) {
            if (author.getName() == authorName) {
                result.push_back(publication);
                break;
            }
        }
    }
    return result;
}

// Display all publications in the database
void PublicationManager::showAllPublications() const {
    for (const auto& publication : publicationDatabase) {
        publication.displayPublication();
        std::cout << "-------------------------\n";
    }
}