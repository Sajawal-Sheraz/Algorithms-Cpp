#include<bits/stdc++.h>
using namespace std;
class hashmap{
    private:
    int bucket;
    list<int>*hashtable;
    public:
    hashmap(int a){
        bucket=a;
        hashtable=new list<int>[bucket];
    }

    int hash_function(int a){
        return (a%bucket);
    }
    
    void insert(int key){
        int index=hash_function(key);
        hashtable[index].push_back(key);
    }
    void display()
    {

        for(int i=0;i<bucket;i++)
        {
            cout<<i;
            list<int>::iterator j=hashtable[i].begin();
        for(;j!=hashtable[i].end();j++)
            {
                cout<<"---->"<<*j;


            }
            cout<<endl;

        }

    }
};


int main(){
    int n,ch,element;

cout<<"size"<<endl;
cin>>n;
hashmap hashelement(n);
while(1)
{
    cout<<"-----------------"<<endl;
    cout<<"1#   Insertion "<<endl;
    cout<<"2#   Display "<<endl;
    cout<<"-----------------"<<endl;

    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"---->";
        cin>>element;
        hashelement.insert(element);
        break;
        case 2:hashelement.display();
        break;
        default:cout<<"Wrong value"<<endl;
    }

}




return 0;
}