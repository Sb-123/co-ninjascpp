#include<iostream>
#include<string>
using namespace std;

int main(){

     //M = 1st.


    // char str[20];
    // str[20]=cin.get();

    // int alp=0;
    // int digit=0;
    // int schar=0;
    // int i=0;

    // while(str[i]!='$'){
    //     if(str[i]>='a' && str[i]<='z' ||str[i]>='A'&& str[i]<='Z'){
    //         alp++;
    //     }else if(str[i]>='0' && str[i]<='9'){
    //         digit++;
    //     }else{
    //         schar++;
    //     }

    //     i++;



    // }

    // cout<<alp<<" "<<digit<<" "<<schar<<endl;

     //M = 2nd.

    // string str;
    // str=cin.get();

    // int alp=0;
    // int digit=0;
    // int schar=0;
    // int i=0;

    // while(str[i] !='$'){
    //     if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
    //         alp++;
    //     }else if(str[i]>='0' && str[i]<='9'){
    //         digit++;
    //     }else{
    //         schar++;
    //     }
    //     i++;
    // }
    // cout<<alp<<" "<<digit<<" "<<schar<<endl;


    //M = 3rd.

//     char c;

//    int a=0,d=0,s=0;

//    while(c!='$'){

//        c=cin.get();

//         if((c>='a' && c<='z')){

//            a++;}

//         if(c>=48 && c<=57){

//             d++;

//         }

//         if(c==' '|| c=='\n'|| c=='\t'){

//             s++;

//         }

//    }cout<<a<<" "<<d<<" "<<s<<endl;


//M = 4th.

char c;
int a=0,d=0,s=0;
while(c!='$'){
    c=cin.get();
    if(c>='a' && c<='z'){
        a++;
    } if(c>='0' && c<='9'){
        d++;
    }
    if(c==' ' ||c=='\t' || c=='\n'){
        s++;
    }

}

cout<<a<<" "<<d<<" "<<s<<endl;



}