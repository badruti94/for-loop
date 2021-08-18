#include <iostream>

using namespace std;

int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int k=1; k<=6-i; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(int i=1; i<=5; i++){
        cout<<" ";
    }
    cout<<"*\n";

    for(int i=1; i<=4; i++){
        for(int j=1; j<=5-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i+1; k++){
            cout<<"*";
        }
        cout<<"\n";
    }

}