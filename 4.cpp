#include <iostream>

using namespace std;

int main(){
    int tinggi;

    cout<<"Input tinggi segitiga: ";
    cin>>tinggi;

    for(int i=1; i<=tinggi; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}