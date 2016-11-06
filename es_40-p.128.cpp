//es_40-p.128 cpp.
#include <iostream>
using namespace std;


float m;
float q;
void f(float& x,float& y) {
    int k=m*x+q-y;
    if(k=0){
        cout<<"il punto P appartiene alla retta!";

    }
else{
        cout<<"il punto P non appartiene alla retta!";
    }

    }

 int main(){

cout<< "inserisci coefficente angolare: ";
cin>>m;
cout<<"inserisci termine noto: ";
cin>>q;

     float Xp;
     float Yp;
     cout<<"inserisci la coordinata x del punto P: ";
     cin>> Xp;
     cout<<"inserisci la coordinata y del punto P: ";
     cin>> Yp;
     f(Xp,Yp);
     return 0;




 }








