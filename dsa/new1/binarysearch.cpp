#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+e/2;
    while(s<=e){
        if(target == arr[mid]){
            return mid;
        }
        else if(target> arr[mid]){
            s=mid+1;
        }
        else{
            e=mid+1;
        }
        mid= s+e/2;
        
    }
    return -1;
}
int main(){
    int arr[6]={2,8,13,15,17,23};
    int key=15;
    int ans=binarySearch(arr,6,key);
    cout<<ans;
    return 0;
}
