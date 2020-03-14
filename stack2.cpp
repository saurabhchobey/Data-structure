#include<iostream>
using namespace std;


class stack1{
	
	
	int* a;
	int top;
	public:
	
	stack1(int size){
		a=new int(size);
		top=-1;
	}
	
	void push1(int val){
		
		a[top]=val;
		top=top+1;
		
		return;
	}
	int top1(){
		
		
		return a[top-1];
	}
	void opo1(){
		
		for(int i=0;i<top-1;i--){
			a[top]=a[top-1];
			top=top;
			
			
		}
		return;
	}
	void display(){
		for (int i=0;i<=top;i++){
			cout<<a[i]<<" ";
			
		}
		cout<<endl;
	}
};
int main(){
	stack1 s(20);
	s.push1(4);
		s.push1(5);
			s.push1(6);
				s.push1(7);
					s.display();
				s.top1();
				cout<<s.top1()<<endl;
				s.display();
				
				
				return 0;
}
