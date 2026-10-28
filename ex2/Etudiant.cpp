#include "Etudiant.hpp"

Etudiant::Etudiant(const std::string& nom, const std::string& cin)
    : nom(nom), cin(cin), note1(0.0), note2(0.0), note3(0.0), filiere(nullptr) {}

std::string Etudiant::getNom() const {
    return nom;
}

void Etudiant::setFiliere(Filiere* f) {
    filiere = f;
}

Filiere* Etudiant::getFiliere() const {
    return filiere;
}
