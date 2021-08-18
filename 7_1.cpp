#include <iostream>

using namespace std;

int main()
{
    int jml;

    cout <<"SEGITIGA 2\n";
    cout <<"================\n";
    cout<<"Masukkan n (1 - 10) : ";
    cin>>jml;

    cout<<"Jumlah n = "<<jml<<"\n";

    for(int i=jml; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}