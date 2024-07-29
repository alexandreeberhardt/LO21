#include <iostream>
#include <string>
#include <sstream>
using namespace std;
enum Statut {celibataire, marie, veuf};
enum Sexe {homme, femme};
class Personne{
    private : //implicite
    string nom;
    string prenom;
    unsigned int annee_naissance=2000;
    Sexe sexe;
    Statut situationFamiliale;
    public :
    string getNom() const {return nom;};
    unsigned int getAge(unsigned int annee_actuelle) const {return annee_actuelle-annee_naissance;};
    Personne (const string& n, const string& p, const unsigned int a, const Sexe se, const Statut st){
        nom=n;
        prenom=p;
        annee_naissance=a;
        sexe=se;
        situationFamiliale=st;
    };
    string retourneInfo()const{
        stringstream sb;
        sb<<(sexe==homme?"M. ":"Mme. ")<< nom<<" "<<prenom;
        return sb.str();
    }
};
int main(){
    Personne p("Eber","Alex",2003,homme,celibataire);
    unsigned int age=p.getAge(2024);
    cout<<"Age="<<age<<"\n";
    return 0;
};
int f(){
    Personne* pt=new Personne("Eber","Alex",2003,homme,celibataire);
    delete pt;
    return 0;
}
