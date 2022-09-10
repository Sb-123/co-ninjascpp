#include <iostream>
#include<cstring>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
	// Write your code here

    // if(input.length()=='\0'){
    //     return ;
    // }

    // if(input[0]=='p' && input[1]=='i'){
    //     cout<<"3.14";
    //     replacePi(input.substr(2));
    // }else{
    //     cout<<input[0];
    //     replacePi(input.substr(1));
    // }



  int s=0;
  int len=strlen(input);
  if(input[s]=='\0'){
      return ;
  }
  replacePi(input+1);

  if(input[s]=='p' && input[s+1]=='i'){
      for(int i=len;i>=s+2;i--){
          input[i+2]=input[i];
      }
      input[s]='3';
      input[s+1]='.';
      input[s+2]='1';
      input[s+3]='4';
  }




}





int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
