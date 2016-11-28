//es_51-p.128
#include <iostream>
using namespace std;

 int numeri[10];
 int x;
 int num_maggiori;

 int main(){
 for (x=0;x<10;x++){
 cout<< "Inserisci il valore "<<x<<"  "<<"dell'array: ";
 cin>>numeri[x];
 }
 for(x=0; x<10; x++){
 if(numeri[x]>5) num_maggiori++;
 else{}
 }
 cout<<"I numeri superiori a 5 sono: " <<num_maggiori;
 return 0;
 }
