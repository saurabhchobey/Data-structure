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
	
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	
}
int third(){
	node* temp=head;
	if (temp==NULL || temp->next==NULL || temp->next->next==NULL){
		return -1;
	}
	while(temp->next->next->next!=NULL){
		temp=temp->next;
	}
	
	
	return temp->data;
}


void display(){
	
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}













int main(){
	insert(4);
	insert(5);
//	insert(6);
//	insert(7);
	display();
	cout<<third();
	return 0;
	
}
