#include<iostream>
using namespace std; 
template <class t>
class vector{
    t * arr;
    int size;
    public:
    vector(int m){
    size=m;
    arr= new t[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the value of "<<i+1<<" number"<<endl;
        cin>>arr[i];
    }
    }
    t dotproduct(vector v){
        t d=0;
        for (int i = 0; i < size; i ++)
        {
           d+=this->arr[i]*v.arr[i]; 
        }
        return d;
        }
};
int main(){
   vector <int>v1(3);
   vector<int> v2(3);
   cout<<"the dot product is "<<v1.dotproduct(v2)<<endl;
   return 0;
}