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
class queue{
    
        node* front;
        node* back;
        public:
        queue(){
            front=NULL;
            back=NULL;

        }
    void push(int x){
        node* n=new node(x);
        if (front==NULL)
        {
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;

    }
    void pop(){
        if(front==NULL){
            cout<<"Queue Is  Already Empty...."<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    void search(int n){
        if(front==NULL){
            cout<<"Queue Is Empty...."<<endl;
            return;
        }
        else{
            
         node* scan=front;  
         int count=0;
	      while(scan!=NULL){
     	     count++;
	    	    if(scan->data==n){
			    cout<<"Number #"<<n<<" Found At Index="<<count<<endl;
	        	}
          scan=scan->next;	
    	}       
    }
}

    void del(){
         if(front==NULL){
            cout<<"Queue Is  Already Empty...."<<endl;
            return;
        }
        node* todel=front;
        front=front->next;
         while (front != NULL) {
             delete todel;
             todel = todel->next;
             front=front->next;

        
    }
  }
  void toReplace(int n,int replace_n){
	node* temp=front;
	while(temp!=NULL){
		if(temp->data==n){
			temp->data=replace_n;
		}
		
		temp=temp->next;
		
		
	}		
}



    int peek(){
        if(front==NULL){
            cout<<"Queue Is Empty...."<<endl;
            return -1;
        }
        else{
            node* show=front;
         show = front;
        cout<<"Queue Contains=";
         while (show != NULL) {
         cout<< show->data <<" ";
         show = show->next;
      }
        }    
    cout<<endl;
    }



    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }

};




int main(){
    queue q;


     int list,size, num,n,replace_n;
     int c=1;
     cout<<"1--------------->>    Create"<<endl;
     cout<<"2--------------->>    Delete From Top"<<endl;
     cout<<"3--------------->>    Delete All"<<endl;
     cout<<"4--------------->>    Display"<<endl;
     cout<<"5--------------->>    Search."<<endl;
     cout<<"6--------------->>    Replace.."<<endl;
     cout<<"7--------------->>    Exit.."<<endl;
      do {
      cout<<"\n\nMake  choice:";
      cin>>list;
      switch(list) {
         case 1: {

			 cout<<"Enter Size=";
			 cin>>size;
            
			 for (int i= 0; i < size; i++)
			 {
 	    		 cout<<"Enter  "<<c<<"  value=";
                 cin>>num;
                 q.push(num);
                 c++;
			 }
             cout<<"Values Stored.";
            break;
         }
         case 2: {
            q.pop();
            cout<<"1st Element Deleting"<<endl;
            q.peek();
            break;
         }
         case 3: {
             q.del();
              cout<<"Deleted"<<endl;
            break;
         }
         case 4: {
            q.peek(); 
            break;
         }
         case 5: {
              cout<<"Search Number=";
				cin>>n;
				q.search(n); 
            break;
         }

         case 6: {
            cout<<"Enter Number to be Update=";
				cin>>n;
				cout<<"Enter  New Number to Replace=";
				cin>>replace_n;
				q.toReplace(n,replace_n);
				cout<<"After Updating The Queue Is:\n";
				q.peek();
            break;
         }
         case 7: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
             cout<<"Invalid Number";
         }
      }
   }while(list!=7);


    return 0;
}