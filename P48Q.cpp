#include<iostream>
using namespace std; 

int main(){
    cout<<"enter any number"<<endl;
    int n,count=0;
    cin>>n;
while (n!=0){
    if (n&1){count++;}
    n=n>>1;
}
if (count==1){
    cout<< true;
}
else
{cout<< false;}
   return 0;
}
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        while (n != 0) {
            if (n & 1) {
                if (count==INT32_MAX){break;}
                count++;
            }
            n = (n >> 1);
        }
        if (count == 1) {
            return true;
        } 
        else {
            return false;
        }
    }
};