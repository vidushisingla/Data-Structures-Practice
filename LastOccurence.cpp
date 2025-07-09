#include<iostream>
using namespace std;

int lastOccurence(int arr[], int target, int length){
    if (length==0){
        return -1;
    }else if (arr[length-1]==target){
        return length-1;
    }else{
    int index= lastOccurence(arr,target,length-1);
    if (index!=-1){
        return index;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"how many elements do you want to enter?: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int ans= lastOccurence(arr, 27, n);
    cout<<"Index: "<< ans;

}