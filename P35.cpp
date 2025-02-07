#include<iostream>
#include<fstream>
using namespace std; 

int main(){
   ofstream out;
   out.open("sample.txt");
   out<<"this is my name here";
   
   out.close();
   string st1,st2;
   ifstream in;
   in.open("sample.txt");
   //in>>st1>>st2;
   //cout<<st1<<" "<<st2<<endl;
   while(in.eof()==0){
    getline(in,st1);
    cout<<st1<<endl;
   }
in.close();
   return 0;
}