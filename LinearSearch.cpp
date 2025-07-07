#include<iostream>
using namespace std;

bool search(int arr[], int length, int target){
    if(length==0){
        return false;
    }

        bool smallAns= search(arr, length-1, target);

        if(smallAns==true){
            return true;
        }else if(arr[length-1]==target){
            return true;
        }else return false;
         
}

int main(){
    int n;
    cout<<"How many numbers do you want to enter? ";
    cin>> n;
    int arr[n];
    cout<<"Please enter numbers: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    bool finalAns= search(arr, n, 32);
    cout<<"finalAnswer: "<<finalAns;
}