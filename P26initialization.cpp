#include<iostream>
using namespace std; 
class test{
    int a;
    int b;
    public:
    //test(int i,int j):b(j+a),a(i){
    //test(int i,int j):a(i),b(a+j){
    test(int i,int j):b(j),a(i+b){

        cout<<"constructor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
   test t(4,6);
   return 0;
}