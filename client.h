#include "string"
using namespace std;
class client{
   
    string nom; 
    string prenom;
    string CIN;
    int age;
public:
    client( string, string, string ,int );
    string getNom();
    string getPrenom();
    string getCIN();
    int getage();
    void setNom(string);
    void setPrenom(string);
    void setCIN(string);
    void setage(int);
    void afficherdetailsclient();
};

  