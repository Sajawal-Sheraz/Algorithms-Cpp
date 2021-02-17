#include<iostream>
using namespace std;


class node{
	public:
		int data;
		node* next;
		
		
		node(int val){
			data=val;
			next=NULL;
		}
};

char menu(){
	char choice;
	cout<<"\n\n			-------------------------------    Menu   --------------------------------------\n";
	cout<<"			|									        |\n";
	cout<<"			|			Press 1 To Creat a List:				|\n";
	cout<<"			|			Press 2 To Search A NUmber:				|\n";
	cout<<"			|			Press 3 To Delete List:					|\n";
	cout<<"			|			Press 4 To Show List:					|\n";
	cout<<"			|			Press 5 To Delete Certain Number:			|\n";
    cout<<"			|			Press 6 To Replace Certain Number:			|\n";
	cout<<"			|			Press 7 To Exit:					|\n";
	cout<<"			|									        |\n";
	cout<<"			---------------------------------------------------------------------------------\n";
	
	cin>>choice;
	return choice;	
}




void insertAtTail(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=n;
	
}

void deletion_number(node* &head,int val){
	if(head->data==val){
		node* ptr=head;
		head=head->next;
		delete ptr;
	}
	else{
		node* ptr=head->next;
		node* per=head;
		while(ptr!=NULL)
		{
			if(ptr->data==val){
				per->next=ptr->next;
				delete ptr;
				break;
			}
			per=ptr;
			ptr=ptr->next;
		}
	}
	
	
	
	
	
}
void display(node* head){
	if(head==NULL)
	cout<<"The List Is Empty.\n";
	else{
		node* temp=head;
	while(temp!=NULL){

		cout<<temp->data<<"   ";
		temp=temp->next;
	  }
	}
	cout<<endl;
}
void search(node* head,int search_n){
	node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		if(temp->data==search_n){
			cout<<"Number #"<<search_n<<" Found At Index="<<count<<endl;
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

void deletion_list(node* head){
	if(head==NULL)
	cout<<"List Already Empty";
	else
	{
	node *temp=head;
	head=head->next;
	delete temp;
	
	}
	
}


main(){
	node* head=NULL;
	int n;
	int search_n,del_n,replace_n,lenght;
	char choice;

	do{
	choice =menu();
	switch(choice){
		case'1':
			cout<<"Lenght of list=";
			cin>>lenght;
			for(int i=1;i<=lenght;i++){
				cout<<"Enter	#"<<i<<"  Number=";
				cin>>n;
				insertAtTail(head,n);
			}	
			break;
		case'2':cout<<"Search Number=";
				cin>>search_n;
				search(head,search_n);	
			break;
		case'3':
			while(head=NULL)
	  			deletion_list(head);
	  			cout<<"\aList Successfully Deleted:";
				break;
		case'4':cout<<"The List Contains:\n";
   				display(head);
   				
				break;
		case'5':cout<<"Enter Number To Delete=";
				cin>>del_n;
				deletion_number(head,del_n);
				display(head);
				break;
        case'6':cout<<"Enter Number to be Update=";
				cin>>search_n;
				cout<<"Enter  New Number to Replace=";
				cin>>replace_n;
				toReplace(head,search_n,replace_n);
				cout<<"After Updating The List Is:\n";
				display(head);
				break;
		default:cout<<"System Exiting\n";
	}	
	}while(choice!='7');

	return 0;
}