#include <vector>
#include"medicament.cpp"
class pharmacie{
    vector<medicament>Med_s;
    public:
    
   void ajouterMedicament(const medicament&) ;
   void supprimermedicament( const vector<medicament> );
};