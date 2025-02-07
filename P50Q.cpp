/*#include<iostream>
using namespace std; 
int uniqueelment(int arr[],int size){
int unique;
for(int i=0;i<size;i++){
    for(int j=0;j<size &&(i!=j) ;j++){
    if(arr[i]==arr[j]){
       continue;}}
unique=arr[i];}
return unique;}
int main(){
   int arr[]={54,45,41,9,45,54,9};
   cout<<"the unique element is "<<uniqueelment(arr,7);
   return 0;
}*/
#include<iostream>
using namespace std; 
#include<vector>
int pivoti(vector<int>& nums) {
    int s = 0;
    int siz = nums.size();
    int e = siz - 1;
    int ans=0;
    while (s <e) {
        int mid = (e-s) / 2;
        if (nums[0] <= nums[mid]) {
            return mid+1;    
        } 
        else if(nums[mid]>nums[0]){
            s=mid+1;
        }
    }
    return -1;
}
 
int main(){
    
   vector<int> nums={4,5,6,7,0,1,2};
   cout<<pivoti(nums);
   return 0;
}