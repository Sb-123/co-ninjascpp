#include <iostream>
#include<cstring>

using namespace std;

void reverse(char input[],int s,int e){

    while(s<e){

        swap(input[s],input[e]);
        s++;
        e--;
    }
}

void reverseStringWordWise(char input[]){
    int n=strlen(input);

    reverse(input,0,n-1);

    int cnt=0;
    for(int k=0;k<n;k++){
        if(input[k]==' '|| input[k]=='\0' ){
            reverse(input,cnt,k-1);
            cnt=k+1;
        }
    }
    reverse(input,cnt,n-1);
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
