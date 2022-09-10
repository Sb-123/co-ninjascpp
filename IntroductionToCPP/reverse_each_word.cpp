#include <iostream>
#include <cstring>
using namespace std;

void reverse(char input[],int s,int e){
    while(s<e){
        int temp=input[s];
        input[s]=input[e];
        input[e]=temp;
        s++;
        e--;
    }
}

void reverseEachWord(char input[]) {
    // Write your code here
    int size=strlen(input);
    int cnt=0;
    for(int i=0;i<=size;i++){
        if(input[i]==' ' || input[i]=='\0'){
            reverse( input,cnt,i-1);
            cnt=i+1;
        }
    }
       // reverse(input,cnt,size);
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}