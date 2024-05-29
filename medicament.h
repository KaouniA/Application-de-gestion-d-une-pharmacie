#include "string"
# include"date.cpp"
using namespace std;
class medicament{
    int NumMedicament;
    string nom;
    double prix;
    int quantite;
    date date_expiration;
    string fournisseur;
    public:
    medicament( int ,int , int ,int,string ,double ,int , string );
    void afficheM();
    int getNumMedicament();
    string getnom();
    double getprix();
    int getquantite();
    date getdate_expiration();
    string getfournisseur();
    void setquantite(int);
    friend class Vente;
    bool operator==(const medicament &) ;
       

};