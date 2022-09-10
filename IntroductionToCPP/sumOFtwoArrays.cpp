#include <iostream>
using namespace std;

void sumOfTwoArrays(int *a1, int size1, int *a2, int size2, int *a3)
{

    int i=size1-1,j=size2-1, k;
  
    k=max(size1, size2);

    int carray=0, num=0;

    while(i>=0 && j>=0 && k>=0){

        if(i==-1 && j==-1) {
            a3[k]=carray;
            return ;
        }
        num=a1[i]+a2[j]+carray;
        carray=num/10;
        int rem=num%10;
        a3[k]=rem;
        i--;
        j--;
        k--;
    }

    while(i>=-1 && k>=0){
        if(i==-1){
            a3[k]=carray;
            return ;
        }

        num=a1[i]+carray;
        carray=num/10;
        int rem=num%10;
        a3[k]=rem;
        i--;
        k--;
    }
    while(j>=-1 && k>=0){
        if(j==-1){
            a3[k]=carray;
            return ;
        }
        num=a2[j]+carray;
        carray=num/10;
        int rem=num%10;
        a3[k]=rem;
        j--;
        k--;
    }




}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}