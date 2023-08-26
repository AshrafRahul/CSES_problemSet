#include<bits/stdc++.h>
using namespace std;

void weirdAlgorithm(long long int n){
    cout << n << " ";
    while(n!=1){
        if(n%2!=0) {
            n = (n*3)+1;
            cout << n << " ";
        } if(n%2==0) {
            n = n/2;
            cout << n << " ";
        }
    }
}

int main(){
    long long int n;
    cin>>n;

    weirdAlgorithm(n);

    return 0;
}