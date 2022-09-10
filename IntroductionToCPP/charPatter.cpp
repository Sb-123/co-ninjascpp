#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int nst=1;
    int row=0;
    while(row<n){
        
        for(int i=1;i<=nst;i++){
            char ch='A'+row;
            cout<<ch;
        }
        cout<<endl;
        nst++;
        row++;
    }
}