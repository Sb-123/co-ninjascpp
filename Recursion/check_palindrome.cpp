#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(char input[],int s,int e){

  if(s==e){
    return true;
  }
  if(input[s]!=input[e]){
    return false;


  }
  if(s<e+1){
    return checkPalindrome(input,s+1,e-1);
  }

  return true;

  
}
bool checkPalindrome(char input[]){

    int n=strlen(input);
    if(n==0){
        return true;
    }

    return checkPalindrome(input,0,strlen(input)-1);
    
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}



