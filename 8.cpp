#include <iostream>

using namespace std;

int main(){
    int jml;

    cout<<"masukkan Jumlah Maks Bintang = ";
    cin>>jml;

    cout<<"\n\n";

    for(int i=jml; i>=1; i--){
        for(int j=1; j<= i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}