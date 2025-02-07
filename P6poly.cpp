#include<iostream>
using namespace std; 
float vol(float rad,float h){
    return 3.14*rad*rad*h;
}
float vol(float s){
    return s*s*s;
}
float vol(float l,float b,float h){
    return l*b*h;
}
int main(){
   cout<<"The volume of cylinder is"<<vol(1,5)<<endl;
   cout<<"The volume of cube  is"<<vol(1)<<endl;
   cout<<"The volume of cuboid is"<<vol(1,5,5)<<endl;
   return 0;
}