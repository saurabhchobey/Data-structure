#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	
};
node* head =NULL;
void insert(int val){
	node* n=new node();
	n->data=val;
	n->next=NULL;
	
	if (head==NULL){
		head=n;
		return ;
	}
	node* temp;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	
}
void display(){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}
void delee(){
	node* temp=head;
	node* temp2=temp;
	while(temp!=NULL){
		temp2=temp;
		temp=temp->next;
	}
	delete(temp2);
	return;
}

int main(){
	insert(5);
	
		insert(1);
			insert(2);
				insert(6);
					insert(9);
						insert(7);
						insert(8);
						delee();
						display();
						return  0;
}
