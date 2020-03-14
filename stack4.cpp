#include<iostream>
using namespace std;



class stack1
{
	int top;
	int* a;
	
	public:
		 stack1(int size){
			
			a=new int(size);
			top=0; 
		}
		
		void push1(int val){
			
			
		a[top]=val;
		top=top+1;
			
			return;
		}
		
		void pop1(){
			
			return;
			
		}
		
		int  top1(){
			
			return a[top-1];
		}
		void display()
		{
			for(int i=0;i<top;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
				return;
		}
	
		
		};

int main(){
	
	
	stack1 s(5);
	s.push1(5);
		s.push1(5);	s.push1(55);	s.push1(59);
	
	s.display();
	
	cout<<s.top1()<<endl;
		s.display();
	
	
	
	
	
	
	
	
	return 0;
}
