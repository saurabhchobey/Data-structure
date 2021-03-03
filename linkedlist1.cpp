#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
	
};
node* head;
void insert(int val){
	node* n=new node();
	n->data=val;
	n->next=NULL;
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	return;
	
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
	insert(5);
	insert(7);
	insert(3);
	insert(9);
	insert(5);
	
	display();
	
	return 0;
}
