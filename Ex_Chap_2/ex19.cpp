#include <iostream>
#include <string>
using namespace std;
enum Statut {celibataire, marie, veuf};
enum Sexe {homme, femme};
class personne{
    private : //implicite
    string nom;
    string prenom;
    unsigned int annee_naissance;
    Sexe sexe;
    Statut situationFamiliale;
};
int main(){
    return 0;
};