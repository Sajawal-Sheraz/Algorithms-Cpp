#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;
//************************* Insertion of values***************************
void insertion(int values){
    node* list=new node();
    list->data=values;
    list->next=NULL;
    if(head==NULL){
        head=list;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=list;
     
    }
      
}

//******************************* Finding Mid Number************************* 

void display_mid(){
    node* back=head;
    node* front=head;
    
     while(front->next!=NULL){
            front=front->next->next;
            back=back->next; 
               
        }
        node* middle=back;
        
        cout<<"Mid Number : "<<middle->data<<"\n";   
    }


//********************************** Main Code Driver****************************


int main(){
    int numbers,search_value,length;
    cout<<"Enter length:  ";
    cin>>length;
    for (int i = 0; i < length; i++)
    {
        cout<<"Enter Number:  ";
        cin>>numbers;
        insertion(numbers);
    }
    display_mid();

   
    
return 0;
}