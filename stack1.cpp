#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* head;
void insert(int val){
	node* n=new node;
	n->data=val;
	n->next=NULL;
	
	if (head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp!=NULL){
		temp->next=n;
		temp=temp->next;
		
	}
	temp->next=n;
}







int main(){
	
	
	
	
	return 0;
}
