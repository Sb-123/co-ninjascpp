#include <iostream>
#include<cstring>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
      int j=0;
      int s=0;
      int len=strlen(input);

      if(input[s]=='\0'){
          return ;
      }

      removeConsecutiveDuplicates(input+1);

      int i=0;
      for(;input[i]!='\0';i++){
          if(input[i-1]==input[i]){
              continue;
          }else{
              input[j++]=input[i];
          }
      }
          input[j]='\0';


}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}