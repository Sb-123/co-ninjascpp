#include<iostream>
#include<math.h>
using namespace std;

bool checkMenber(int n){
    int s=sqrt(n);
    return (s*s==n);
}

bool isfibonacci(int x){
    return checkMenber(5*x*x+4) || checkMenber(5*x*x-4);
}