#include <iostream>
using namespace std;

int onen(int n){
    for(int i = 0; i < n; i++){
        cout << i+1 << " ";
    }
    return 0;
}

int main(){
    int n;
    cout << "enter a number" << endl;
    cin>>n;
    onen(n);
}