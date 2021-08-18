#include <iostream>

using namespace std;

int main(){
    for(int i=1; i<=6; i++){
        for(int j=1; j<=7-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        for(int l=1; l<=i-1; l++){
            cout<<"*";
        }
        cout<<"\n";
    }
}