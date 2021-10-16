#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,exit;
    cout<<"Length: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"--->";
        cin>>arr[i];
    }

    // For Ascending order

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Ascending order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    // for Descending  order
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Descending  order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    
return 0;
}