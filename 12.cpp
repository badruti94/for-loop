#include <iostream>

using namespace std;

int main(){
    int tinggi;

    cout<<"=======================\n";
    cout<<"PROGRAM BENTUK SEGITIGA\n";
    cout<<"=======================\n\n";

    cout<<"Masukkan Tinggi Segitiga : ";
    cin>>tinggi;

    cout<<"\n\n";
    cout<<"Segitiga A\n";
    for(int i=1; i<=tinggi*2+1; i++){
        cout<<"*";
    }
    cout<<"\n\n\n";

    cout<<"Segitiga B\n";
    for(int i=1; i<=tinggi; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int k=1; k<=tinggi+1-i; k++){
            cout<<"*";
        }
        for(int l=1; l<tinggi+1-i; l++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    cout<<"Segitiga C\n";
    for(int i=1; i<tinggi; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1; i<=tinggi; i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=tinggi-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<'*';
        }
        cout<<"\n";
    }

}