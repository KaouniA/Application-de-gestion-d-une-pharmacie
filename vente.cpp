#include <iostream>
#include "vente.h"
using namespace std;
    /*constructeur d'un ojet vente*/
     Vente::Vente(int numV,int j,int m,int a) : numVente(numV), montantTotal(0), dateVente(j, m, a) {}
    double Vente::calculerMontantTotal(const medicament & Med )
    {
           montantTotal += Med.prix * Med.quantite;
           return montantTotal;
    }

    

    void Vente::afficherDetailsVente()
    {
        cout << "N° Vente: " << numVente << endl;
        cout << "Date de Vente: ";
        dateVente.afficheD();
        cout << "Medicament Vendus: " << endl;
        for (const medicament & Med : Med_s)
        {
            cout << "- " << Med.nom << ", Quantité: " << Med.quantite << ", Prix Unitaire: " << Med.prix << endl;
        }
        cout << "Montant Total: " << montantTotal << endl;
    }
