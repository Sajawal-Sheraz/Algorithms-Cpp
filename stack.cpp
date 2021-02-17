#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;


// ---------------------------------------Input Area

void push(int num) {
   struct Node* temp =
   (struct Node*) malloc(sizeof(struct Node));
   temp->data = num;
   temp->next = top;
   top = temp;
}

//---------------------------------------- Deletetion Area

void pop() {

   if(top==NULL)
   cout<<"Already Empty"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
 }

// --------------------------------- deletetion of Complete Stack

// void pop() {
// 	 if(top==NULL)
// 	 cout<<"Stack Underflow"<<endl;
// 	 while (top!=NULL)
//    {
// 	  cout<<"Deleting "<< top->data <<endl;
//       top = top->next;
//    }
// }	

//-------------------------------------- Show the Stack

 void display() {
    struct Node* show;
    if(top==NULL)
   cout<<"Stack is Empty";
   else {
      show = top;
      cout<<"Stack Contains=";
      while (show != NULL) {
         cout<< show->data <<" ,";
         show = show->next;
      }
   }
   cout<<endl;
}
int main() {
   int list,size, num;
   cout<<"1--------------->>    Create"<<endl;
   cout<<"2--------------->>    Delete From Top"<<endl;
   cout<<"3--------------->>    Display"<<endl;
   cout<<"4--------------->>    Exit"<<endl;
   do {
      cout<<"\n\nMake  choice="<<endl;
      cin>>list;
      switch(list) {
         case 1: {

			 cout<<"Enter Size=";
			 cin>>size;
			 for (int i= 0; i < size; i++)
			 {
				 cout<<"Enter value=";
            cin>>num;
            push(num);
			 }
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
           cout<<"Invalid Number";
         }
      }
   }while(list!=4);
   return 0;
}