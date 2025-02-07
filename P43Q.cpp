#include<iostream>
using namespace std; 

int main(){
    int n;
   cout<<"enter any number"<<endl;
   cin>>n;
   int product=1,sum=0;
int rem;
while(n!=0){
    rem=(n%10);
    product*=rem;
    sum+=rem;
    n=n/10;

}
cout<<product<<endl;
cout<<sum<<endl;
cout<<"the req ans is"<<(product-sum)<<endl;
   return 0;
}