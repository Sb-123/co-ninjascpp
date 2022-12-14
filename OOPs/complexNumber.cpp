#include <iostream>
using namespace std;

class ComplexNumbers{

    int real,imaginary;
    public :
      

      ComplexNumbers(int real, int imaginary){
        this ->real=real;
        this ->imaginary = imaginary;
      }

      void print(){
        cout<<real<<" + "<<"i"<<imaginary<<endl;
      }

      void plus(ComplexNumbers const &c2){
        real =real +c2.real;
        imaginary = imaginary+c2.imaginary;
      }

      void multiply(ComplexNumbers const &c2){
        int first =real*c2.real;
        int second =real*c2.imaginary;
        int third = imaginary*c2.real;
        int last = (-1)*(imaginary*c2.imaginary);

        real = first + last;
        imaginary = second + third;
      }

  

};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}