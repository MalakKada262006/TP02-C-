#include <iostream>
#include "Etudiant.hpp"
#include "Filiere.hpp"

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << "=== Test de l Association 1-1 (Etudiant / Filiere) ===" << std::endl;

    Etudiant etu1("Karim Alami", "AB12345");
    Filiere fil1("Genie Informatique");

    fil1.afficherInfo();

    fil1.inscrireEtudiant(&etu1);

    std::cout << "\n--- Verification apres inscription ---" << std::endl;
    fil1.afficherInfo();

    if (etu1.getFiliere() != nullptr) {
        std::cout << "Validation reciproque OK : L etudiant " << etu1.getNom()
                  << " sait qu il est dans la filiere." << std::endl;
    }

    return 0;
}
