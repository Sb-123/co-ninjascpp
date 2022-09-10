#include<bits/stdc++.h>
using namespace std;

bool isSorted(int input[],int size){
    if(size==0 || size==1){
        return true;
    }

    return input[0]<input[1] && isSorted(input+1,size-1);
}

int main(){
    int n;
    cin>>n;
    int input[n];

   for(int i=0;i<n;i++){
       cin>>input[i];
   }

   cout<<isSorted(input,n);            
}