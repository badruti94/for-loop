#include <iostream>

using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        for(int j=1; j<=11-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        for(int l=1; l<i; l++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=1; i<=21; i++){
        cout<<"*";
    }
    cout<<"\n";

    for(int i=1; i<=10; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int k=1; k<=11-i; k++){
            cout<<"*";
        }
        for(int l=1; l<=10-i; l++){
            cout<<"*";
        }
        cout<<"\n";
    }
}