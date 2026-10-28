#include "Filiere.hpp"
#include "Etudiant.hpp"
#include <iostream>

Filiere::Filiere(std::string nom)
    : nomFiliere(nom), etudiantInscrit(nullptr) {}

Filiere::~Filiere() {

}

void Filiere::inscrireEtudiant(Etudiant* e) {
    if (etudiantInscrit != nullptr) {
        std::cerr << "Erreur : La filiere " << nomFiliere << " est deja occupee." << std::endl;
        return;
    }
    etudiantInscrit = e;
    e->setFiliere(this);
    std::cout << "Succes : " << e->getNom() << " a ete inscrit en " << nomFiliere << "." << std::endl;
}

Etudiant* Filiere::getEtudiantInscrit() const {
    return etudiantInscrit;
}

void Filiere::afficherInfo() const {
    std::cout << "--- Informations Filiere ---" << std::endl;
    std::cout << "Filiere : " << nomFiliere << std::endl;
    if (etudiantInscrit) {
        std::cout << "Etudiant inscrit : " << etudiantInscrit->getNom() << std::endl;
    } else {
        std::cout << "Aucun etudiant inscrit." << std::endl;
    }
}
