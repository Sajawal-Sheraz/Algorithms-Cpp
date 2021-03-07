#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;


};
node* head=NULL;

// Insertion of a Element


void insert(int val){
    node* num=new node();
    num->data=val;
    num->next=NULL;
    if(head==NULL){
        head=num;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=num;

    }
}



void headdelete(int n){     // For Corner Deletion...
        node* temp=head;
        head=head->next;
        delete temp;
        }
void del(int n){
   node* temp=head;      //For any number Deletion
   if(temp->data==n){
       headdelete(n);
   }
  else{
  
   while(temp->next->data!=n){
       temp=temp->next; 
   }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
   }
}


// Display element

void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;

}



int main(){
    int length,number,del_num;
    cout<<"lenght of List:";
    cin>>length;
    for (int i = 1; i<= length; i++)
    {
        cout<<i<<" Number: ";
        cin>>number;
        insert(number);
    }
    cout<<"Number to Delete: ";
    cin>>del_num;
    del(del_num);
    cout<<"After deletion: \n";
    display();
    return 0;
}