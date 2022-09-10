#include<iostream>
using namespace std;

// int main(){
// //  int a=50;
// //  int *ptr=&a;
// //  int *q=ptr;
// //  (*q)++;
// //  cout<<a<<endl;

// // int a = 50;
// //  int *ptr = &a;
// //  cout << (*ptr)++ <<" ";    
// //  cout << a << endl;

// // int a[6] = {1, 2, 3};
// // int *b = a;
// // cout << b[2];

// // int a[] = {1, 2, 3, 4};
// // int *p = a++;
// // cout << *p << endl;

// // char c1='a';
// // char *pc=&c1;

// // cout<<c1<<endl;
// // cout<<pc<<endl;
// // cout<<*pc<<endl;

// // char ch = 'a';
// //  char* ptr = &ch;
// //  ch++;
// //  cout << *ptr << endl;

// char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];


// }


// void changeSign(int *p){
//   *p = (*p)  *  -1;
// }

// int main(){
//   int a = 10;
//   changeSign(&a);
//   cout << a << endl;
// }

// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

// int main(){
// //  int a = 10;
// //  square(&a);
// //  cout << a << endl;

// // int a = 10;
// // int *p = &a;
// // int **q = &p;
// // int b = 20;
// // *q = &b;
// // (*p)++;
// // cout << a << " " << b << endl;

// // int a = 100;
// // int *p = &a;
// // int **q = &p;
// // int b = (**q)++ + 4;
// // cout << a << " " << b << endl;

// //  int a = 100;
// //   int *p = &a;
// //   int **q = &p;
// //   int b = (**q)++;
// //   int *r = *q;
// //   (*r)++;
// //   cout << a << " " << b << endl;

//  char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] << *(st)+i << *(i+st) << i[st];
//   }
//   return 0;
// }

// void Q(int z)
// {
//   z += z;
//   cout<<z << " ";
// }

// void P(int *y) 
// {
//   int x = *y + 2;
//   Q(x);
//   *y = x - 1; 
//   cout<<x << " ";
// }

// int main()
// {
// //  

// //   
// //   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
// //   float *ptr1 = &arr[0];
// //   float *ptr2 = ptr1 + 3;
// //   cout<<*ptr2<<" ";
// //   cout<< ptr2 - ptr1;
// //   return 0;

//  int numbers[5];
//   int * p;
//   p = numbers; 
//   *p = 10;
//   p = &numbers[2]; 
//   *p = 20;
//   p--; 
//   *p = 30;
//   p = numbers + 3;
//   *p = 40;
//   p = numbers;
//   *(p+4) = 50;
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";
//   }
//   return 0;
// }


// void updateValue(int *p){
//     *p = 610 % 255;
// }

// int main(){
//     char ch = 'A';
//     char *pt = &ch;
//     updateValue((int*)pt);
//     cout << ch;
// }

// #define MULTIPLY(a, b) a*b

// int main(){
//     cout << MULTIPLY(2+3, 3+5);
//     return 0;
// }

#define SQUARE(x) x*x

int main(){
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}