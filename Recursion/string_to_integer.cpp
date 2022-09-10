#include<iostream>
#include<cstring>
using namespace std;

int stringToNbr(char input[],int last){
    if(last==0){
        return input[last]-'0';
    }

    int small_ans=stringToNbr(input,last-1);

    int a=input[last]-'0';
    return small_ans*10+a;
}

int stringToNbr(char input[]){
  int len=strlen(input);
  return stringToNbr(input,len-1);
}


int main(){
    char input[50];
    cin>>input;
    cout<<stringToNbr(input);

}