#include <iostream>
using namespace std;

int main(){
    int nBilangan;
    string cStatus;

    srand (time(0));

    nBilangan = rand () % 10;
    cout << "Nilainya adalah = " << nBilangan << endl;

    if(nBilangan % 2 == 0 ){
        cStatus = "Genap";
    }
    else{
        cStatus = "Ganjil";
    }

    cout << "Statusnya adalah = " << nBilangan << endl;
    return 0;
}