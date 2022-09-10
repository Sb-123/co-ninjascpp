#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here

    int n=strlen(input);
    int i=0,j=0;


    for(;input[i]!='\0';i++){
        if(  input[i]==input[i+1]){
            continue;
        }else{
            input[j]=input[i];
            j++;
        }
    }
   // cout<<res<<endl;
  // return res;
  input[j]='\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}