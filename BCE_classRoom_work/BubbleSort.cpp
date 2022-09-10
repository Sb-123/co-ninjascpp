#include <bits/stdc++.h>
#include <time.h>


using namespace std;

void insertionSort(int *arr,int n){

    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(curr<arr[j]){
                arr[j+1]=arr[j];

            }else{
                break;
            }
        }

        arr[j+1]=curr;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *arr,int n){


    for(int i=0;i<n-1;i++){
        int min= arr[i],min_idx=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void bubbleSort(int *arr, int n)
{
   // int flag ;

    for (int step = 1; step < n - 1; step++)
    {
       // flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
               // flag = 0;
            }
        }
    //    if(flag == 0){
    //     break;
    //    }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand()%100;
    }
    clock_t start,end;
    
    start = clock();
    bubbleSort(arr,n);
    end=clock();

    double time_taken_b = ((double)(end-start)/CLOCKS_PER_SEC);
    cout<<"Time taken by bubble sort :"<<time_taken_b<<endl;

    start = clock();
    selectionSort(arr,n);
    end=clock();

    double time_taken_s = ((double)(end-start)/CLOCKS_PER_SEC);
    cout<<"Time taken by selection sort :"<<time_taken_s<<endl;

    start = clock();
    insertionSort(arr,n);
    end = clock();

    double time_taken_i =((double)(end-start)/CLOCKS_PER_SEC);
    cout<<"Time taken by insertion sort :"<<time_taken_i<<endl;


  
    



    delete[] arr;

    return 0;
}