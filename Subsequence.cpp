#include<iostream>
#include<vector>
using namespace std;

void subsequence(int idx,vector<int> &ds,int arr[], int n){
    if(idx==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.empty()){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    ds.push_back(arr[idx]);
    subsequence(idx+1,ds,arr,n);

    ds.pop_back();
    subsequence(idx+1,ds,arr,n);

}

int main(){
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ds;
    subsequence(0,ds,arr,n);

    return 0;
}