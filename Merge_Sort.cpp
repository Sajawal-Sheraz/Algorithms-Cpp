#include<bits/stdc++.h>
using namespace std;



void merge(int arr[],int left,int mid,int right){
  int i=left;
  int j=mid+1;
  int k=left;
    int size=(right-1)+1;
  int temp[size];
  while(i<=mid && j<=right){
    if(arr[i]<=arr[j]){
      temp[k]=arr[i];
      i++;
      k++;
    }
    else{
      temp[k]=arr[j];
      j++;
      k++;
    }
  }
  while(i<=mid){
    temp[k]=arr[i];
    i++;
    k++;
  }
  while (j<=right){
    temp[k]=arr[j];
    j++;
    k++;
  }


  for(int sort=left; sort<=right;sort++){
    arr[sort]=temp[sort];
  }
  
}
void mergeSort(int arr[],int left,int right){
  if(left<right){
    int mid=(left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);

  }
}


int main(){
    int size;
    cout<<" Size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" Elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Before Merge sort:"<<endl;
    for(int i=0;i<size;i++){
    cout<<arr[i]<<"  ";
    }
    mergeSort(arr,0,(size-1));
    cout<<"\nAfter Merge sort:\n";
    for(int i=0;i<size;i++){
    cout<<arr[i]<<"  ";
    }




return 0;
}