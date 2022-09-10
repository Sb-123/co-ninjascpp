#include<iostream>
using namespace std;

void reverse(int *arr,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[6]={1,4,6,5,-2,15};

    reverse(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}