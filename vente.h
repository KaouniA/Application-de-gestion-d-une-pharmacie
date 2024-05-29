#include<vector>
#include "date.cpp"
#include"medicament.cpp"
class Vente {
    int numVente;
    double montantTotal;
    date  dateVente;
    vector<medicament>Med_s;
    
public:
    Vente(int numV,int j,int m,int a);
    double calculerMontantTotal(const medicament &);
    void afficherDetailsVente();
   
};
