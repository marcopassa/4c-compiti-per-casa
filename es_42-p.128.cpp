//es_42-p.128 cpp.
#include <iostream>
#include <string.h>
using namespace std;

string prodotto;
string descrizione;
float prezzo;
float incremento_perc;
float incremento;
float prezzo_finale;
int risp;


void f()
{
    do{
    cout<<"Inserisci il nome del prodotto:  ";
    cin>> prodotto;
    cout<<"Inserisci una descrizione per il prodotto:  ";
    cin>> descrizione;
    cout<<"Inserisci il prezzo:  ";
    cin>>prezzo;
    cout<<"Inserisci incremento (%):  ";
    cin>>incremento_perc;

    incremento=(prezzo/100)*incremento_perc;
    prezzo_finale=prezzo+incremento;

    cout<<descrizione <<"------->"<<"Il prezzo incrementato è:  "<<prezzo_finale<<endl;
    cout<<"Vuoi inserire altri prodotti? (risp 1=si,2=no) ------> ";
    cin>> risp;

    } while (risp==1);


}

int main()
  {
       f();
      return 0;



}
