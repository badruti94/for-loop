#include <iostream>

using namespace std;

int main(){
    int jml;

    cout<<"Menampilkan bintang dalam bentuk Pola\n\n";

    cout<<"Masukkan Jumlah Bintang : ";
    cin>>jml;

    for(int i=1; i<jml; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int k=1; k<=jml-i; k++){
            cout<<" ";
        }
        for(int l=1; l<jml-i; l++){
            cout<<" ";
        }
        for(int m=1; m<=i; m++){
            cout<<"*";
        }
        cout<<"\n";
    }
}