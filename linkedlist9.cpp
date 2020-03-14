#include<iostream>
using namespace std;
struct node{
	int data ;
	node* next;
};
node* head;
void insert(int val){
	node* n=new node();
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
return;
}
void search(int val){
	node* temp=head;
	int i=1;
	while(i<val&&temp!=NULL){
		temp=temp->next;
		
		i=i+1;
	}
	if (temp!=NULL){
		cout<<temp->data;
	}
	else{
		cout<<"object not found";
	}
		
	
	cout<<endl;
	
	
	
}





void display(){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void count1(int k){
	node* temp=head;
	int count=0;
	while(temp!=NULL){
		if(temp->data==k){
			count=count+1;
		}
		temp=temp->next;
	}
	cout<<count<<" ";
	cout<<endl;
}
void middel(){
	node* temp=head;
	node* temp2=head;
	while(temp!=NULL&&temp->next!=NULL){
		temp=temp->next->next;
		temp2=temp2->next;
	}
	cout<<temp2->data<<" yes";
	cout<<endl;
}
int main(){
	insert(2);
	insert(1);
	insert(5);
	insert(1);
	insert(8);
	insert(1);
		insert(8);
	
	insert(10);
	display();
	search(3);
	search(10);
	count1(1);
	middel();
	
	
	
	
	return 0;
	
}
