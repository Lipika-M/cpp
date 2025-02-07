#include<iostream>
using namespace std; 
void swapalter(int arr[],int size){
    int first=0,second=1;
    while(second<=(size-1)){
        swap(arr[first],arr[second]);
        first+=2;
        second+=2;
    }}
void printarr(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,89,45,7,10};
    swapalter(arr,5);
    printarr(arr,5);

   return 0;
}