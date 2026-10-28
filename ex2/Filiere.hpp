#ifndef FILIERE_HPP
#define FILIERE_HPP

#include <string>

class Etudiant;

class Filiere {
private:
    std::string nomFiliere;
    Etudiant* etudiantInscrit;

public:
    Filiere(std::string nom);
    ~Filiere();

    void inscrireEtudiant(Etudiant* e);
    Etudiant* getEtudiantInscrit() const;
    void afficherInfo() const;
};

#endif
