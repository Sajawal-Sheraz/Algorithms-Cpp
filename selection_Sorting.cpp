#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cout<<"Length: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"-->";
        cin>>arr[i];
    }

    // for  Ascending order

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
     cout<<"In Ascending order:\n";

    for(int i=0;i<n;i++){
       
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // for Aescending order

     for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
     cout<<"In Descending order:\n";

    for(int i=0;i<n;i++){
       
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
return 0;
}