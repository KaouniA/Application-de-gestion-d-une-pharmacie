#include"vente.cpp"
#include"pharmacie.cpp"

int main(){
    Vente vente1(01, 06, 2015, 8);
    medicament paracetamol(30,05,2011,1, "Paracétamol", 2.50, 3,"sante");
    medicament  aspirin  (25,07,2022,2, "Aspirin", 3.00, 2,"health");
    aspirin.afficheM();
    vente1.afficherDetailsVente();
    pharmacie Med;
    Med.ajouterMedicament( paracetamol);
   
    

   
    return 0;
}







