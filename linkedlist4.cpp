#include<iostream>
using namespace std;

	struct node
	{
		int number;
		node *next;
	};
	bool isEmpty();
	char menu();
	void insertatfirst(node *&head,node *&last,int number);
	void insert(node *&head,node *&last,int number);
	void remove(node *&head,node *&last);
	void showlist(node *current);
	bool isEmpty(node *head){
		if (head==NULL){
			return true;
			else
			return false;
		}
		
	}
	char menu(){
		char choice;
		cout<<"menu"<<endl;
		  
		
	}
		void insertatfirst(node *&head,node *&last,int number){
			node *temp=new node 
			
		}
	void insert(node *&head,node *&last,int number){
		
	}
	void remove(node *&head,node *&last){
		
	}
	void showlist(node *current){
		
	}
	
	 
	
	int main(){
		node *head=NULL;
		node *last=NULL;
	
	return 0;
}
