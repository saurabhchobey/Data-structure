#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* head=NULL;
 void insertmiddle(int val){
 	
 	node* n=new node();
	n->data=val;
	n->next=NULL;
	

	if(head==NULL){
		head=n;
		 return ;
	}
	node* temp;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	return ;
	
	
}
void display(){
	node* temp;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-> ";
		temp=temp->next;
	
	  }
	cout<<endl;
}
void insert(int val,int po){
	node* n=new node;
	n->data=val;
	n->next=NULL;
	node* temp=head;
	po=po-1;
	
	//if()
	while(po--)
	{
		temp=temp->next;
		if(temp==NULL){
			cout<<"false"<<endl;
			return ;
		}
		
	}
	node* temp2=temp->next;
	temp->next=n;
	n->next=temp2;
	return ;
}\




int main(){
	insertmiddle(3);
		insertmiddle(7);
			insertmiddle(8);
				insertmiddle(9);
				insert(12,2);
				
				
	display();
	return 0;
}
