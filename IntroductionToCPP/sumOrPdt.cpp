#include<iostream>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    int sum=0,pdt=1;

    if(c==1){
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
            cout<<sum<<endl;

    }else if(c==2){
        for(int i=1;i<=n;i++){
            pdt=pdt*i;
        }
            cout<<pdt<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}