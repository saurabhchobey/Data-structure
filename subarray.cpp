// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   
    int arr[]={1,2,3,7,5,8};
    int s=15;
  
   int sum=0;
   int left=0;
   int right=0;
    while(sum!=s){
          if(sum<s ){
              sum=sum+arr[right];
              right++;
          }
          if(sum>s ){
              sum=sum-arr[left];
              left++;
              
          }
          
           
       }
       cout<<left+1<<right;
      

    return 0;
}
