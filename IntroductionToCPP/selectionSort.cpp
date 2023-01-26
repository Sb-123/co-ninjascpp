#include <iostream>
using namespace std;

void selectionSort(int input[], int n)
{
    // Find min element in the array :-

    int min = input[0];
    int minIdx = 0;
    for (int j = 1; j < n; j++)
    {
        if (input[j] < min)
        {
            min = input[j];
            minIdx = j;
        }
    }

    // swap :-
    int temp = input[0];
    input[0] = input[minIdx];
    input[minIdx] = temp;
}

int main()
{
}