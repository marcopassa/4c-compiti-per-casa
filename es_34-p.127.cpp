//es_34-p.127.cpp
#include <iostream>
using namespace std;
void f(int a) {
    cout<<"inserisci numero: ";
    cin>>a;
    int i=1;

    for(int i=1;i<=5;i++) {

        a++;
        cout<<a<<endl;
    }

}


int main() {

    int a;
    f(a);
    return 0;

}
