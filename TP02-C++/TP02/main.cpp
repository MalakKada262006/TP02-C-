#include "Etudiant.hpp"
#include "Filiere.hpp"
#include <iostream>

int main() {

   Filiere* f1 = new Filiere("Informatique");

    Etudiant* e1 = new Etudiant("Alice", "123", 15, 16, 17);
    Etudiant* e2 = new Etudiant("Bob", "456", 10, 12, 14);
    Etudiant* e3 = new Etudiant("Charlie", "789", 18, 19, 20);

    f1->inscrireEtudiant(e1);
    f1->inscrireEtudiant(e2);
    f1->inscrireEtudiant(e3);


    f1->afficherTous();
    std::cout << "Nombre d'étudiants : " << f1->getNombreEtudiants() << std::endl;

    f1->retirerEtudiant(e2);
    std::cout << "\nAprès retrait de Bob :" << std::endl;
    f1->afficherTous();


    delete f1;

    return 0;
}
