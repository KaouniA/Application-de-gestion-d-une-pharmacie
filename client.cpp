  #include <iostream>
  #include "client.h"
  using namespace std;
   /*constructeur d'un client*/
   client::client (string nom,string prenom,string CIN, int age) {
   
    this->nom=nom;
    this->prenom=prenom;
    this->CIN=CIN;
    this-> age=age;
   }
    /*recupere le nom d'un client*/
    string client:: getNom() {
        return nom;
    }
      /*recupere le prenom d'un client*/
    string client::getPrenom() {
        return prenom;
    }
       /*recupere cin d'un client*/
    string client::getCIN() {
        return CIN;
    }
     /*recupere l'age d'un client*/
    int client::getage(){
        return age;
    }

     /*modifier le nom d'un client*/
    void client::setNom(string _nom) {
        nom = _nom;
    }
     /*modifier prenom d'un client*/
    void client::setPrenom(string _prenom) {
        prenom = _prenom;
    }
       /*modifier cin d'un client*/
    void client::setCIN(string _CIN) {
        CIN = _CIN;
    }
      /*modifier l'age d'un client*/
    void client::setage(int _age) {
        age=_age;
    }
     /*afficher les information d'un client*/
    void client::afficherdetailsclient(){
        cout<<"nom:"<<nom<<"prenom:"<<prenom<<"cin:"<<CIN<<"age:"<<age<<endl;
    }


