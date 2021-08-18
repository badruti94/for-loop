#include <iostream>

using namespace std;


int main(){
    int jml;

    cout<<"masukkan Jumlah Maks Binatang = ";
    cin>>jml;    

    for(int i=1; i<=jml; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=jml+1-i; k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}