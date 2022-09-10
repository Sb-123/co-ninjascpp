#include<iostream>
using namespace std;



int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    int i;
    
    for( i=0;i<n;i++){

        if(arr[i]==x){

            return i;
        }
    }
    
    return -1;
}


int main(){

    int t;
    cin>>t;
    int cnt=1;

    
    while(cnt<=t){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<linearSearch(arr,n,x)<<endl;
    }
    
}