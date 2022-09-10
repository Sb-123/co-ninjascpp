#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int es=0;
    int os=0;

    while(n !=0){
        int rem=n%10;
        if(rem%2==0){
            es=es+rem;
        }else{
            os=os+rem;
        }
        n=n/10;
    }

    cout<<es<<" "<<os<<endl;
}