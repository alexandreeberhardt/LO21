#include <iostream>
using namespace std;

int main(){
    double* pt1= new double[20];
    for (int i=0;i<20;i++) pt1[i]=3.14;
    delete[] pt1;
    return 0;
};