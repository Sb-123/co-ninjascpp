// input - input array
// size - length of input array
// element - value to be searched

int b_s(int input[],int s,int e,int x){
    if(s>e){
        return -1;
    }
    
    int m=s+(e-s)/2;
    
   
    while(input[m]==x){
        return m;
        
    }
    while(input[m]<x){

        return b_s(input,m+1,e,x);
    }while(input[m]>x){
        return b_s(input,s,m-1,x);
    }
    
}



int binarySearch(int input[], int size, int element) {
    // Write your code here
    
    int s=0;
    int e=size-1;
    
   
   // cout<<b_s(input,s,e,element)<<endl;
   int c=b_s(input,s,e,element);
   return c;
    
    

}
#include <iostream>

using namespace std;

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
