#include<iostream>
#include<cstring>
using namespace std;

void removeX(char str[]){
    if(str[0]=='\0'){
        return ;
    }
    if(str[0]!='x'){
        removeX(str+1);
    }else{
        int i=1;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        removeX(str);
    }
}

int main(){
    char str[100];
    cin>>str;

    removeX(str);
    cout<<str<<endl;
}
