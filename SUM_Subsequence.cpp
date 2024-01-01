#include<iostream>
#include<vector>
using namespace std;

void Sum_sub(int idx,vector<int> &ds, int arr[], int n,int s,int sum){
    if(idx==n){
        if(s==sum){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    s+=arr[idx];
    Sum_sub(idx+1,ds,arr,n,s,sum);

    s-=arr[idx];
    ds.pop_back();
    Sum_sub(idx+1,ds,arr,n,s,sum);
}

int main(){
    int n=3;
    int arr[]={1,2,1};
    int sum = 2;
    vector<int> ds;
    Sum_sub(0,ds,arr,n,0,sum);

    return 0;
}
