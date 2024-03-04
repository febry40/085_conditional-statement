#include <iostream>
using spacename std;

int main(){
    int nBilangan;
    string status;

    srand (time(0));

    nBilangan = rand () % 10;
    cout << "Nilainya adalah = " << nBilangan << endl;

    if(nBilangan % 2 == 0 ){
        status = "Genap"
    }
    else{
        status = "Ganjil"
    }

    cout << "Statusnya adalah = " << nBilangan << endl;
    return 0;
}