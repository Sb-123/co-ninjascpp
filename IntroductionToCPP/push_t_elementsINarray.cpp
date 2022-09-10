#include <iostream>
using namespace std;

void pushZeroesEnd(int *arr, int size)
{
    // int temp[size]={0};
    // int k=0,i=0;
    // while(i<size && k<size){
    //     if(arr[i] !=0){
    //         temp[k]=arr[i];
    //         i++;
    //         k++;
    //     }else{
    //         i++;
    //     }
    // }

    int k=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[k++]=arr[i];
        }
    }
    for(int i=k;i<size;i++){
        arr[i]=0;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}