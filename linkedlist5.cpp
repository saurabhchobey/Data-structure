
#include <bits/stdc++.h>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* head = NULL;   
void insert(int new_data) { 

   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = head; 
   head = new_node; 
} 
void display() { 
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main() { 
int a;
   insert(a); {
   	int k;
   	cin>>k;
   	for (int i=0;i<k;i++){
   		cin>>a;
	   }
   }
   cout<<"The linked list is: ";
   display(); 
   return 0; 
} 
