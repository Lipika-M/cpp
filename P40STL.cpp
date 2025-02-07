#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<string>
#include<functional>
#include<algorithm>
using namespace std; 
//VECTOR
/*void display(vector<int> &v){
    cout<<"your required vector is"<<endl;
   for (int i = 0; i < v.size(); i++)
   {
    cout<<v.at(i)<<" ";
   }
}*/
//LIST
/*void display(list<int> &lst){
    cout<<"your required list is"<<endl;
    list<int>:: iterator iter;
    for (iter = lst.begin(); iter!=lst.end(); iter++)
    {
       cout<<*iter<<" ";
    
    }
    cout<<endl;
}*/
//MAPS
/*void display(map<string,int> &mapp){
    cout<<"your required map is"<<endl;
    map<string,int>:: iterator iter;
    for (iter = mapp.begin(); iter!=mapp.end(); iter++)
    {
       cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<endl;
}*/
int main(){
    /* VECTOR
    int size,element;
    cout<<"enter the size of the vector:"<<endl;
    cin>>size;
   vector<int> vec1; //created a vector
   for (int i = 0; i < size; i++)
   { cout<<"enter the value to enter in the vector"<<endl;
   cin>>element;
   vec1.push_back(element);
}
display(vec1);
vec1.pop_back();
display(vec1);
vector<int>::iterator iter=vec1.begin();
vec1.insert(iter,5,576);
display(vec1);
//LIST
list<int> list1;
list1.push_back(5);
list1.push_back(8);
list1.push_back(23);
list1.push_back(3);
list1.push_back(43);
display(list1);
list<int> list2(4);
list<int>::iterator it=list2.begin();
*it=90;
it++;
*it=4;
it++;
*it=43;
it++;
*it=24;
display(list2);
list1.sort();
display(list1);
list1.pop_front();
display(list1);
list1.remove(43);
display(list1);
list1.reverse();
display(list1);
list1.merge(list2);
display(list1);
map<string,int> map1;
map1["rohan"]=23;
map1["harry"]=55;
map1["suhani"]=8;
display(map1);
map1.insert({{"carry",78},{"sonia",8}});
display(map1);
cout<<"the size of the map is "<<map1.size()<<endl;
cout<<"the max size of the  map is"<<map1.max_size()<<endl;
cout<<"the empty's value of map is "<<map1.empty()<<endl;*/
//FUNCTORS
int arr[]={4800,8,79,5,45};
//sort(arr,arr+3);
//sort(arr,arr+5); //will sort first five elements of the array
sort(arr,arr+5,greater<int>()); //now it will sort in descending order
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}

return 0;
}