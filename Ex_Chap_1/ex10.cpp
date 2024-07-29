#include <iostream>
using namespace std;
struct Date{
        unsigned int jour, mois, annee;
    };
Date updateDateVal(Date d, unsigned int j, unsigned int m, unsigned int a){
    d.jour=j;d.annee=a;d.mois=m;
    return d;
}
void updateDatePt(Date *pt,unsigned int j, unsigned int m, unsigned int a){
    pt->annee=a;
    pt->jour=j;
    pt->mois=m;
    }
void updateDateAdr(Date &ref,unsigned int j, unsigned int m, unsigned int a){
    ref.annee=a;
    ref.jour=j;
    ref.mois=m;
    }
int main(){
    
    Date today;
    today.jour=29;
    today.mois=7;
    today.annee=2024;
    return 0;
};