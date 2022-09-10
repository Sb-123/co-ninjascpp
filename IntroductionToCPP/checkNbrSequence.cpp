#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :-"<<endl;
    cin>>n;
    int b=0;
    cout<<"Enter the value of pre :-"<<endl;
    int pre;
    cin>>pre;
    bool isDec=true;

    int a=0;
    int i=1;
    while(i<n){

        int curr;
        cout<<"Enter the value of curr :-"<<endl;
        cin>>curr;
        if(pre==curr){
            a=1;
        }else if(pre>curr){
            if(isDec){
                pre=curr;
            }else if(b==1){
                a=1;
            }else{
                a=1;
            }
        }else if(pre<curr){
            isDec=false;
            pre=curr;
            b=1;
        }
        i++;
    }
    if(a==0){
        cout<<"true";
    }else{
        cout<<"false";
    }
}