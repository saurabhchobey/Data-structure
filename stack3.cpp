#include<iostream>
using namespace std;

class node{
	int top;
	int* a;
	
	public:
	
	
	node(int size){
		a=new int(size);
		top=-1;
		
	}
	void push1(int val){
		
		
		a[top]=val;
		top=top+1;
		
		return;
	}
	void pop1(){
		for(int i=0;i<=top;i++){
			a[i]=a[i+1];
		}
		return;
	}
	void display(){
		for(int i=0;i<=top;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
};
	
	int main(){
		node s(10);
		s.push1(6);
		s.push1(6);
		s.push1(6);
		s.push1(6);
		s.pop1();
		s.display();
		
		
		
	
		
			return 0;
	
};
