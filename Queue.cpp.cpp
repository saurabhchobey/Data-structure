#include<iostream>
using namespace std;

class stack1{

int top;//rear
int front;
int* a;

public:
stack1(int size)
{
	a=new int(size);
	top=0;	
	front=0;
}	

void push1(int val)
{
	a[top]=val;
	top=top+1;
	return;
}

void pop1()
{
	for(int i=front;i<top;i++){
		
		a[i]=a[i+1];
	}
	return;
}
	
int top1(){
	
	return a[top];
}

bool empty(){
	if(top==-1){
		return true;
	}
	else{
		return false;
	}
}

void display()
{
	for(int i=0;i<=top;i++){
		
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return;
}

};

int main(){
	
	stack1 s(20);
	s.display();
	cout<<s.empty()<<endl;
	s.push1(5);
	s.push1(4);
	s.push1(3);
	cout<<s.top1()<<endl;
	s.pop1();
	cout<<s.top1()<<endl;
	s.display();
	
	
	
	return 0;
	
	
}
