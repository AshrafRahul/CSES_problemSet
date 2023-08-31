#include<bits/stdc++.h>

using namespace std;
int n,arr,sum;
int main(){
    cin>>n;

    for(int i=1; i<=n; i++) sum ^= i;
    for(int i=0; i<n-1; i++){
        cin>>arr;
        sum ^= arr;
    }

    cout<<sum<<endl;

    return 0;
}