#ifndef FILIERE_HPP
#define FILIERE_HPP

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

class Etudiant;

class Filiere {
private:
    std::string nomFiliere;
    std::vector<Etudiant*> etudiants;

public:
    Filiere(std::string nom);
    ~Filiere();

    std::string getNomFiliere() const;
    void inscrireEtudiant(Etudiant* e);
    void retirerEtudiant(Etudiant* e);
    int getNombreEtudiants() const;
    void afficherTous() const;
};

#endif
