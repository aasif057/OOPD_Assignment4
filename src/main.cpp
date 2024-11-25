#include <iostream>
#include <vector>
#include "Author.h"
#include "Publication.h"
#include "PublicationManager.h"

int main() {
    // Creating author instances
    Author author1("Arani Bhattacharya", "IIIT-Delhi");
    Author author2("Abhishek Maji", "XYZ University");
    Author author3("Jaya Verma", "ABC Institution");
    Author author4("Aritrik Ghosh", "IIIT-Delhi");

    // Creating an instance of PublicationManager to handle publications
    PublicationManager manager;

    // Creating and adding a publication to the database if the authors are valid
    std::vector<Author> authors1 = {author1, author2, author3};
    if (Publication::validateAffiliation(authors1)) {
        Publication pub1("Fast Online Selection of Sensors for Localization",
                         "International Conf. on Communication Networks", 2022, authors1,
                         "10.1109/COMSNETS53615.2022.9668385");
        manager.addPublication(pub1);
    }

    std::vector<Author> authors2 = {author4, author1};
    if (Publication::validateAffiliation(authors2)) {
        Publication pub2("Gaussian Process for Efficient Sensor Selection",
                         "IEEE Symposium on Spectrum Access Networks", 2021, authors2,
                         "10.1109/DySPAN53946.2021.9677290");
        manager.addPublication(pub2);
    }

    // Display all publications in the database
    std::cout << "All Publications:\n";
    manager.showAllPublications();

    // Searching for publications by a specific author
    std::string authorToSearch = "Arani Bhattacharya";
    std::cout << "\nPublications by " << authorToSearch << ":\n";
    std::vector<Publication> authorPublications = manager.getPublicationsByAuthor(authorToSearch);

    if (!authorPublications.empty()) {
        for (const auto& publication : authorPublications) {
            publication.displayPublication();
            std::cout << "-------------------------\n";
        }
    } else {
        std::cout << "No publications found for " << authorToSearch << ".\n";
    }

    return 0;
}