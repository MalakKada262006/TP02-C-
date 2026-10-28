#include "Filiere.hpp"
#include "Etudiant.hpp"

Filiere::Filiere(std::string nom) : nomFiliere(nom) {}

Filiere::~Filiere() {
    // Libérer la mémoire de tous les étudiants si la filière les possède
    for (Etudiant* e : etudiants) {
        delete e;
    }
    etudiants.clear();
}

std::string Filiere::getNomFiliere() const {
    return nomFiliere;
}

void Filiere::inscrireEtudiant(Etudiant* e) {
    if (e != nullptr) {
        etudiants.push_back(e);
        e->setFiliere(this);
    }
}

void Filiere::retirerEtudiant(Etudiant* e) {
    auto it = std::find(etudiants.begin(), etudiants.end(), e);
    if (it != etudiants.end()) {
        (*it)->setFiliere(nullptr);
        etudiants.erase(it);
    }
}

int Filiere::getNombreEtudiants() const {
    return etudiants.size();
}

void Filiere::afficherTous() const {
    std::cout << "Étudiants de la filière " << nomFiliere << ":" << std::endl;
    for (const Etudiant* e : etudiants) {
        std::cout << "  - " << e->getNom() << " (Moyenne: " << e->calculerMoyenne() << ")" << std::endl;
    }
}
