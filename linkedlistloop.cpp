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
void display(){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ->";
		temp=temp->next;
		
	}
	cout<<endl;
}
void detect(){
	if(head==NULL||head->next==NULL||head->next->next==NULL){
		cout<<"loop not detected 3";
		return;
	}
	node* temp=head->next;
	node* temp2=head->next->next;
	while(temp!=temp2&&temp2->next!=NULL&&temp2->next->next!=NULL){
		temp=temp->next;
		temp2=temp2->next->next;
	}
	if(temp==temp2){
		cout<<"loop detected";
		cout<<endl;
		
		node* temp3=head;
		while(temp!=temp3){
			temp3=temp3->next;
			temp=temp->next;
		}
		cout<<temp->data;
		cout<<endl;
		
	}else{
		cout<<"loop not found";
		cout<<endl;
	}
	

}
int main(){

	insert(9);
		insert(2);
			insert(3);
			insert(4);
					display();
				head->next->next->next->next=head;
					detect();
					
					
					
					
					
					return 0;
}
