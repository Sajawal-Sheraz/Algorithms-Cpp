#include<bits/stdc++.h>
using namespace std;
void find(char word[100],char search,int count,int i){
    if(word[i]=='\0'){
        cout<<count;
    }
    else{
        if(word[i]==search){
            count++;
        }
        i++; 
        find(word,search,count,i); 
    }
}
int main(){
    char search;
    int i=0;
    int count=0; 
    char word[100];
    cout<<"Word= ";
    cin>>word;
    cout<<"Count Character= ";
    cin>>search;
    find(word,search,count,i);
return 0;
}