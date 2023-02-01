#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,decimal=0;
    cin>>n;
    n=n>>4;
    int i=0;
    while(i<6){
        int rem=n%2;
        decimal+=rem*pow(2,i++);
        n/=2;
    }
    cout<<decimal;
}
