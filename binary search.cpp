#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,start,end,mid,f_num;
	
	int max[6];
	for(i=0;i<6;i++){
		cout<<"Enter Number:";
		cin>>max[i];
	}
	for(i=0;i<6;i++){
		cout<<max[i]<<" ";
	}
	cout<<"Find Number:";
	cin>>f_num;
	start=0;
	end=6;
	while(start<=end){
		mid=(start+end)/2;
		if(max[mid]==f_num){
			cout<<"found";
			break;
		}
		else if(f_num<max[mid]){
			end=mid;
		}
		else if(f_num>max[mid]){
			start=mid;
		}
		else{
			cout<<"number not present:";
		}
		
	}
	
return 0;
}