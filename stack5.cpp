#include<iostream>
using namespace std;

class stack1{
	
	int top;
	int* a;
	public:
	 stack1(int size){
		
		a=new int(size);
		top=0;
		
		return;
	}
	
	void push1(int val){
		
		
		
			
			a[top]=val;
			top=top+1;
		
		return;
	}
	
	
	void pop1(){
		a[top]=a[top-1];
		
		return;
	}
	
	int top1(){
		
		
		return a[top-1];
	}
	void siplay(){
		for(int i=0;i<=top-1;i++){
			
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	void cpy(){
		for(int i=top-1;i>-1;i--){
			
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
};
int main()
{
	stack1 s(10);
	s.push1(6);
	s.push1(66);
	s.push1(62);
	s.push1(68);
	s.siplay();
	s.top1();
	cout<<s.top1()<<" "<<endl;
	s.cpy();
	
	
	
	return 0;
}
