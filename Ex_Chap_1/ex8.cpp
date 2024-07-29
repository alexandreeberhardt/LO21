#include <iostream>
using namespace std;

int main(){
    int* pt1=new int;
    *pt1=2;
    int* pt2=new int(4);
    delete pt1;
    delete pt2;
    return 0;
};