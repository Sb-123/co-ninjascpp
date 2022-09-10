bool checkPalindrome(char str[]) {
    // Write your code here
   // bool flag=true;
    
    int i=0;
    int j=sizeof(str)/sizeof(char)-1;
    //int j=str.length(str)-1;
        
    
    while(i<=j){

        if(str[i]!=str[j]){

          return false;
        }else{
            i++;
            j--;
            
        }
        
    }

   
  
    return true;
}


#include <iostream>
#include <cstring>
using namespace std;



int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}