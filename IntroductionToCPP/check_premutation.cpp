#include <iostream>
#include <cstring>
using namespace std;



#include<bits/stdc++.h>


bool isPermutation(char str1[], char str2[]) {
    // Write your code here
    int len1=strlen(str1);
    int len2=strlen(str2);

    int ma=255;
   // cout<<ma<<endl;
    
    int freq[ma+1]={0};
    for(int i=0;i<len1;i++){
        freq[str1[i]]++;
    }
    // for(int i=0;i<ma+1;i++){
    //     cout<<freq[i]<<" ";
    // }
    // cout<<endl;


    for(int i=0;i<len2;i++){
        freq[str2[i]]--;
    }
    for(int i=0;i<ma+1;i++){
        if(freq[i] !=0){
            return false;
        }
    }
    return true;
  
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}