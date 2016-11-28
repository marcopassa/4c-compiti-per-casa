//es_52-p.128
#include <iostream>
using namespace std;

 int K[10];
 int cont;



  int main ()
 {
     for(cont=0;cont<10;cont++)
       {
        cout << " inserisci "<<cont+1<<" valore: ";
        cin >> K[cont];
         }
for (cont=0;cont<3;cont++)
{
 K[cont]=K[cont]*2;
       }
 cout <<"Le prime tre componenti raddoppiate sono: "<<K[0]<<";"<<K[1]<<";"<<K[2]<<endl;
 return 0;
 }
