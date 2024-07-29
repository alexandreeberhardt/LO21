#include <iostream>
using namespace std;

struct Big{
    char large_array[100];
};

void readOnly(const Big& b);

int main(){
    return 0;
};