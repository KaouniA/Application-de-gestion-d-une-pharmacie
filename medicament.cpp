#include <iostream>
# include "string"
#include "medicament.h"
using namespace std;
 /*constructeur d'un objet medicament*/
 medicament::medicament( int j,int m, int a,int nu, string n,double p ,int q , string f):date_expiration(j,m,a){
        NumMedicament=nu;
        nom=n;
        prix=p;
        quantite=q;
        fournisseur=f;
     
 
    }
   void  medicament ::afficheM(){
        date_expiration.afficheD();
        cout<< "nom:"<<nom<<"prix:"<<prix <<"quantite:"<< quantite<<"fournisseur"<<endl;
       
        


    }
  string  medicament::  getnom(){
        return nom;
    }
    double medicament:: getprix(){
        return prix;
    }
    int medicament:: getquantite(){
        return quantite;
    }
    date medicament:: getdate_expiration(){
        return date_expiration;
    }
    string medicament::  getfournisseur(){
        return fournisseur;

    }
    void medicament:: setquantite( int q){
        quantite=q;

    }
    /*operateur d'egalite*/
    bool medicament::operator==(const medicament & m1){
        if (NumMedicament==m1.NumMedicament)
        return true;
        else
        return false;
    }
