// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n ,min_number=0, p=0;
   cin>>n;
   for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
        p=p-a+b;
       if(p>min_number){
          min_number=p;
       }
       
     
       
        
   }
   cout<<min_number<<endl;

    return 0;
}