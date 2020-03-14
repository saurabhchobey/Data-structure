#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* head=NULL;
void insert(int val){
	node* n=new node;
	n->data=val;
	n->next=NULL;
	
	if (head==NULL){
		head=n;
		return;
	}
	node *temp;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	
	
	}
	temp->next=n;
	return;
	
}
void display(){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ->";
		temp=temp->next;
		
	}
	cout<<endl;
}
 void insertback(int val){
 	node* n=new node;
 	n->data=val;
 	n->next=NULL;
 	 
 	 
 	 if(head==NULL){
 	 	head=n;
 	 	return ;
	  }
	  n->next=head;
	  head=n;
	  
	
}
int main(){

int num;
while(cin>>num){
	insert(num);
}	
display();
insertback(4);
insertback(3);
insertback(7);
display();
	
	
	return 0;
}
