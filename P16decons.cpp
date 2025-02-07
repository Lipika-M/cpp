#include<iostream>
using namespace std; 
int count=0;  //GLOBAL VARIABLE
class num{
    public:
num(void){
    count++;
    cout<<"creating a new object with count "<<count<<endl;
}
~num(void){
        cout<<"destroying the  object with count "<<count<<endl;
        count--;
        }
};
int main(){
    cout<<"We are inside the main function "<<endl;
    num n1;
    {
    cout<<"we are inside the block"<<endl;
    num n2,n3;
    cout<<"we are exiting the block"<<endl;
    }
    cout<<"we are back in the main function"<<endl;
    return 0;
}