#include <iostream>
using namespace std;

void bs1(int input[], int size)
{

    for (int step = 1; step < size; ++step)
    {
        for (int i = 0; i < size - step; ++i)
        {
            if (input[i] > input[i + 1])
            {
                int temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
            }
        }
    }
}

void bs(int *input, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (input[i] > input[j])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
}

int main()
{

    int input[] = {50, 25, 5, 20, 10};
    // bs(input,6);
    bs1(input, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    // }

    // void printAllPrefixes(char input[]){

    //     for(int i=0;input[i];i++){
    //         for(int j=0;j<=i;j++){
    //             cout<<input[j];
    //         }
    //         cout<<endl;

    // }
    // }

    // int main(){
    //     char input[100]="abcd";
    //     printAllPrefixes(input);
    // }