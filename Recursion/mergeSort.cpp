#include <iostream>

using namespace std;

void merge(int input[],int s,int mid,int e){
  int output[e+1-s];
  int i=s;
  int j=mid+1;
  int k=0;

  while (i<=mid && j<=e)
  {
    if(input[i]<input[j]){
      output[k++]=input[i++];
    }else{
      output[k++]=input[j++];
    }

  }
  while(i<=mid){
    output[k++]=input[i++];
  }
  while(j<=e){
    output[k++]=input[j++];
  }

  int n=0;
  for(int i=s;i<=e;i++){
    input[i]=output[n];
    n++;
  }

  //  for(int i = 0; i < e+1; i++) {
  //   cout << input[i] << " ";
  // }
  
}

void mergeSort(int input[], int size){
	// Write your code here

  int s=0;
  int e=size-1;

  if(s>=e){
    return ;
  }
  int mid=(s+e)/2;
  mergeSort(input,mid);
  mergeSort(input+mid,e-mid);

  merge(input,s,mid,e);

   for(int i = 0; i < size; i++) {
    cout << input[i] << " ";
  }
        
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  // for(int i = 0; i < length; i++) {
  //   cout << input[i] << " ";
  // }
  return 0;
}