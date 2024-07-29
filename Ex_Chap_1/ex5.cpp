#include <iostream>
using namespace std;

int main(){
    double x = 3.14;
    cout<<"x="<<x<<"\n";
    double *pt=&x;
    *pt=42;
    cout<<"x="<<x<<"\n";
    cout<<"*pt="<<*pt<<"\n";
    cout<<"*adresse="<<pt<<"\n";
    double &ref=x;
    ref = 69;
    cout<<"x="<<x<<"\n";
    cout<<"x="<<ref<<"\n";
    cout<<"*adresse="<<&ref<<"\n";

    return 0;
};