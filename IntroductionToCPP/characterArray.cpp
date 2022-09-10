#include<iostream>
using namespace std;

int length(char input[]){
    int cnt=0;
    for(int i=0;input[i] !='\0';i++){
        cnt++;
    }
    return cnt;

}

void reverseString(char input[]){
    int len=length(input);
    int i=0,j=len=length(input)-1;
    while(i<j){
        // char temp= input[i];
        // input[i]=input[j];
        // input[j]=temp;
        swap(input[i],input[j]);
        i++;
        j--;
    }

}

int main(){
    char input[100];
  //  cin>>input;
    //cin.getline(input,3);
    cin.getline(input,100);
   reverseString(input);
    cout<<input<<endl;

   

}