#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
   int i=0;
   int j=size-1;
    while(i<j){
       
        while(input[i]==0 && i<j){
            i++;
        }
       
        while(input[j]==1 &&  i<j){
            j--;
        }
        if(i<j){


        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        
        
        i++;

        j--;

        }

        }

   


    

    
}





int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = size-1; i >=0; i--)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}


