#include<iostream>
using namespace std; 
/*int fact(int x){
    if (x<2){
        return 1;
}
    return x*fact(x-1);
}*/
/*int fibo(int n){
    if (n<2){
        return 1;
        }
    return fibo(n-1)+fibo(n-2);
    }
*/
int fibo(int n){
   
        if (n<=2){
            return 1;
        }
        return fibo(n-1)+fibo(n-2);
        
    }
     
     


int main(){
    int a,i;
   cout<<"The required number of term"<<endl;
   cin>>a;
   cout<<"The fibonacci series is"<<endl;
   for(i=1;i<=a;i++){
    cout<<"The "<<i<<" term is"<<fibo(i)<<endl;
   }
   //cout<<"the factorial of "<<a<<" is "<<fact(a); || This is for factorial
   return 0;
}