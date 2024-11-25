#ifndef PUBLICATIONMANAGER_H
#define PUBLICATIONMANAGER_H

#include <vector>
#include "Publication.h"

class PublicationManager {
private:
    std::vector<Publication> publicationDatabase;

public:
    void addPublication(const Publication& publication);
    std::vector<Publication> getPublicationsByAuthor(const std::string& authorName) const;
    void showAllPublications() const;
};

#endif // PUBLICATIONMANAGER_H