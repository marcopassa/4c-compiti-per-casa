// es_38-p.127 cpp.
#include <iostream>
using namespace std;

float prezzo;
float sconto;
float prezzo_finale;

void f(float prezzo,float sconto) {

    cout<<"inserisci prezzo: ";
    cin>> prezzo;
    cout<<"inserisci sconto (%): ";
    cin>> sconto;

    prezzo_finale= prezzo-(prezzo/100)*sconto;
    cout<<"il prezzo scontato è: "<<prezzo_finale;

}

int main(){

f(prezzo,sconto);
return 0;

}
