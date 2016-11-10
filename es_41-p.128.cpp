//es_41-p.128. cpp.
#include <iostream>
#include <string>
using namespace std;

string reparto;
float incasso;
float incasso_tot;
float media;
int contatore=0;
int risp;





float dati_somma()
 {
     do {

        cout<<"Inserisci il nome del reparto: ";
        cin>> reparto;
        cout<<"inserisci incasso giornaliero: ";
        cin>> incasso;

        incasso_tot=incasso_tot + incasso;
        contatore=contatore+1;
        cout<<"Vuoi inserire altri dati? (risp 1=si, 2=no)---->g ";
        cin >>risp;


     } while (risp==1);

     return incasso_tot;


}


float f_media()
{
    media=incasso_tot/contatore;
    cout<<"La media degli incassi giornalieri è :"<<media;
    return media;


}

int main()
{
    dati_somma();
    f_media();
    return 0;



}
