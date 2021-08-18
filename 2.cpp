#include <iostream>

using namespace std;

int main(){
    int angka;

    cout<<"Program Membuat Anak Panah\n";
    cout<<"Masukan angka: ";
    cin>>angka;

    cout<<"\nGambar Anak Panah\n";

    for(int i=angka; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int k=1; k<=angka; k++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=1; i<=angka; i++){
        cout<<"*";
    }
    cout<<"\n";

    for(int i=1; i<=angka; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int k=1; k<=angka; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}