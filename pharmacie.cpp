 #include "pharmacie.h"
 /*l'ajout d'un medicament a un pharmacie*/
 void pharmacie::ajouterMedicament(const medicament& Med){
      Med_s.push_back(Med);
 }
    /*suppression d'un medicament*/
 void pharmacie::supprimermedicament( const vector<medicament> m){
        for(medicament me:m){
        int indexjtodelete;
        int i=0;
        for(medicament med :Med_s){
            if (med==me) 
            indexjtodelete=i;
            i++;
        }
        Med_s.erase(Med_s.begin()+i);

        }}
