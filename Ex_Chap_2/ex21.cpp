#include <iostream>
#include <string>
using namespace std;
enum Statut {celibataire, marie, veuf};
enum Sexe {homme, femme,nb};
class personne{
    private : //implicite
    string nom;
    string prenom;
    unsigned int annee_naissance=2000;
    Sexe sexe;
    Statut situationFamiliale;
    public :
    string getNom() const {return nom;};
    unsigned int getAge(unsigned int annee_actuelle) const {return annee_actuelle-annee_naissance;};
    personne (const string& n, const string& p, const unsigned int a, const Sexe se, const Statut st){
        nom=n;
        prenom=p;
        annee_naissance=a;
        sexe=se;
        situationFamiliale=st;
    };
};
int main(){
    personne p("Eber","Alex",2003,homme,celibataire);
    unsigned int age=p.getAge(2024);
    cout<<"Age="<<age<<"\n";
    return 0;
};