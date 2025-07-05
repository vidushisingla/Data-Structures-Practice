#include<iostream>
#include <vector>

using namespace std;

vector <int> bubbleSort(vector<int> unsorted){
    for(int i=0; i<unsorted.size(); i++){
        for(int j= 0; j<unsorted.size()-i-1; j++){
            if((unsorted[j])>(unsorted[j+1])){
                swap(unsorted[j], unsorted[j+1]);
            }else continue;
        }
    }
    return unsorted;
}
int main(){
    int n;
    cout<<"How many numbers you want to enter? ";
    cin>>n;
    vector<int>numbers(n);
    cout<<"Please enter numbers: ";
    for(int x=0; x<n; x++){
        cin>>numbers[x];
    } 
    vector<int> ans= bubbleSort(numbers);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }  
}