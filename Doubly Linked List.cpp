#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node* prev;
	node(int val){
		data=val;
		next=NULL;
		prev=NULL;
	}
};





char menu(){
	char choice;
	cout<<"												        \n";
	cout<<"-------------->>>>>	Press 1 To Create a List:				\n";
	cout<<"-------------->>>>>	Press 2 To Search A NUmber:				\n";
	cout<<"-------------->>>>>	Press 3 To Update A  Number:					\n";
	cout<<"-------------->>>>>	Press 4 To Delete A Number:			\n";
    cout<<"-------------->>>>>	Press 5 To Show List:			\n";
	cout<<"-------------->>>>>	Press 6 To Exit:					\n";
	cout<<"												        \n";
	
	
	cin>>choice;
	return choice;	
}
void athead(node* &head,int val){
	node* head_n=new node(val);
	head_n->next=head;
	if(head!=NULL){
			head->prev=head_n;

	}

	head=head_n;

}



void attail(node* &head,int val){
	if(head==NULL){
		athead(head,val);
		return;
	}

	
	node* n=new node(val);
	node* temp=head;

	while (temp->next!=NULL)
	{
			temp=temp->next;
	}
	   temp->next=n;
		n->prev=temp;
}
void display(node* head){
	node* temp=head;
	while (temp!=NULL)
	{
		cout<<temp->data<<"  ";
		temp=temp->next;
	} 
	cout<<endl;
}


void deleteathead(node* &head){
	node* todelete=head;
	head=head->next;
	head->prev=NULL;

	delete todelete;
}
void deletion(node* &head,int pos){
	if(pos==1){
			deleteathead(head);
			return;
	}
	node* temp=head;
	int count=1;
	while(temp!=NULL && count!=pos){
		temp=temp->next;
		count++;
	}
	temp->prev->next=temp->next;
	if(temp->next!=NULL){
		temp->next->prev=temp->prev;
	}
	delete temp;
}
void search(node* head,int search_n){
	node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		if(temp->data==search_n){
			cout<<"Number "<<search_n<<" Found At Index="<<count<<endl;
		}
		temp=temp->next;	
	}		
}
void toReplace(node* head,int search_n,int replace_n){
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==search_n){
			temp->data=replace_n;
		}
		
		temp=temp->next;
		
		
	}		
}



int main(){
	node* head=NULL;
	int length,value,delete_n,search_n,replace_n;
	char choice;
	do
	{
		choice =menu();
	switch(choice){
		case'1':
				cout<<"Enter length of list\n";
				cin>>length;
				for(int i=0;i<length;i++){
				cout<<"Eneter A Number=";
				cin>>value;
				attail(head,value);	
				}	
				cout<<"\n\n\aList Has Been Saved Successfully";
			break;
		case'2':cout<<"Search Number=";
				cin>>search_n;
				search(head,search_n);	
			break;
		case'3':	
					cout<<"Enter Number to be Update=";
		            cin>>search_n;
	 				cout<<"Enter  New Number to Replace=";
					cin>>replace_n;
					toReplace(head,search_n,replace_n);
					cout<<"\n\nAfter Updating The List Is:\n";
					display(head);
			break;
		case'4':
				cout<<"Enter an Index to delete=";
				cin>>delete_n;
				deletion(head,delete_n);
					
			break;
		case'5':
				display(head);	
			break;
		default:
				cout<<"\a\a\aSystem Exiting\n";

}
	} while (choice!='6');
	return 0;	

}