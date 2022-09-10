#include<iostream>
using namespace std;

bool isPrime(int a){
    int d=2;
    while(d<a){
        if(a%d==0){
            return false;
        }
        d++;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}