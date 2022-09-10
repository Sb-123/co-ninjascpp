#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code here"

    int i=0;
    int j=strlen(input)-1;
    while(i<=j){
        if(input[i]==' '){
            input[i]=input[i+1];
            input[i+1]=' ';
           

        }
        i++;
    }
}
void removeSpace(char input[]){
    int cnt=0;
    for(int i=0;input[i];i++){
        if(input[i] !=' '){
            input[cnt++]=input[i];
        }
    }
            input[cnt]='\0';
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
   // trimSpaces(input);
   removeSpace(input);
    cout << input << endl;
}

