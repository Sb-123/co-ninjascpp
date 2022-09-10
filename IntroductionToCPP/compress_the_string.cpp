#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    // Write your code here.
    int size = input.length();
    
    if(size==0)
        return "";
    string output = "";
    output+=input[0];
    
    // char prev = input[0];
    int count = 1;
    for(int i=1;i<size;i++){
        if(input[i-1] == input[i]){
            count++;
        	if(i==size-1)
                output+=to_string(count);
        }
        else{
            if(count>1){
                output+=to_string(count);
                output+=input[i];
            }
            else{
				output+=input[i];
            }
            count = 1;
        }
    }
    
    return output;
}

















int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}