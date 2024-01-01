#include<iostream>
#include<vector>
using namespace std;

int Count_sum(int idx,int arr[],int n,int s,int sum){
    if(idx==n){
        if(s==sum){
            return 1;
        }
        else return 0;
    }
    //ds.push_back(arr[idx]);
    s+=arr[idx];
    int l=Count_sum(idx+1,arr,n,s,sum);

    s-=arr[idx];
   // ds.pop_back();
    int r= Count_sum(idx+1,arr,n,s,sum);

    return l+r;

}

int main(){
    int n=3;
    int arr[]={1,2,1};
    int sum=2;
    //vector<int> ds;
    cout<<Count_sum(0,arr,n,0,sum);

    return 0;
}