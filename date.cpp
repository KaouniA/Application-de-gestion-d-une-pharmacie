#include <iostream>
#include"date.h"
using namespace std;

date::date(int j, int m ,int a){
    jour=j;
    mois=m;
    annee=a;
}
void date::afficheD(){
    cout<< "jour:"<<jour<<"mois:"<< mois<<" annee:"<<annee<<endl;


}
int date::getjour(){
    return jour;

}
int date::getmois(){
    return mois;
}
int date::getannee(){
return annee;
}
