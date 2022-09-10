#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    // Write your code here
    int n= strlen(input);

    int ma=255;
    int freq[ma+1]={0};
    int i=0;
    for(;i<n;i++){
        freq[input[i]]++;

    }
    char result;
    int max=freq[input[i]];
    for(int j=0;j<n;j++){
        if(freq[input[j]]>max){

        max=freq[input[j]];
        result=input[j];
        }
    }


  return result;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}