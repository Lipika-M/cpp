#include<iostream>
#include<fstream>
using namespace std; 

int main(){
 /* string s="harry bhai";
   ofstream out("samplefile.txt");
   out<<s;
   out.close();
   ifstream in("samplefile.txt");
   string read;
  // in>>read;
   getline(in,read);
   cout<<"the name is "<<read <<endl;*/
   string s;
   ofstream hout("sample.txt");
   cout<<"enter your name"<<endl;
   cin>>s; //always rejects the input after whitespace
   hout<<s+" is my name";
   hout.close();
   ifstream hin("sample.txt");
   string content;
   hin>>content; //reject the content of file after whitespace
   //getline(hin,content);
   cout<<"the name entered was "<< content<<endl;

   return 0;
}