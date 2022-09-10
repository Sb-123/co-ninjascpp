#include<iostream>
using namespace std;
#include<cstring>

void printAllsubstring(char input[]){

    for(int i=0;input[i]='\0';i++){
        for(int j=strlen(input)-2;j>=0;j--){
            cout<<input[j];
        }
        cout<<endl;
    }
}

int main(){
    char input[]="abcd";
    printAllsubstring(input);
}