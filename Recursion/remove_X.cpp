#include<iostream>
#include<cstring>
using namespace std;

void removeX(char input[]){
    int s=0;
    int cnt=0;
    int len=strlen(input);
    if(input[s]=='\0'){
        return ;
    }
    for(int i=0;i<=len;i++){
        if(input[i]!='x'){
            input[cnt]=input[i];
            cnt++;
        }else{
            continue;
        }
    }
}

int main(){
    char input[100];
    cin.getline(input,100);
    removeX(input);
    cout<<input<<endl;

}


