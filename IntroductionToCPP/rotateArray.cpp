#include<iostream>
using namespace std;

void reverse(int *arr,int s,int e){
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}


void rotate(int *arr,int k,int n){
    k=k%n;
    if(k<0){
        k +=n;
    }

    reverse(arr,0,n-1);
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    
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

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}