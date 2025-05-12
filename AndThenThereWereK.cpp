#include<iostream>
using namespace std;

int RecursiveAnd(int n){
    if(n==1) return 1;
    return (n & RecursiveAnd(n-1));
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        int r=RecursiveAnd(n);
        
        cout<<r<<endl;
    }
    return 0;
}