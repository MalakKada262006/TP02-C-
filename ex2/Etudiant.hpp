#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

class Filiere;

class Etudiant {
private:
    std::string nom;
    std::string cin;
    double note1, note2, note3;
    Filiere* filiere;

public:
    Etudiant(const std::string& nom, const std::string& cin);

    std::string getNom() const;
    void setFiliere(Filiere* f);
    Filiere* getFiliere() const;
};

#endif
