#include<iostream>
#include<vector>
using namespace std;

bool One_sum(int idx,vector<int> &ds,int arr[],int n,int s,int sum){
    if(idx==n){
        if(s==sum){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        else
            return false;
    }

    ds.push_back(arr[idx]);
    s+=arr[idx];
    if(One_sum(idx+1,ds,arr,n,s,sum)==true){
        return true;
    }

    s-=arr[idx];
    ds.pop_back();
    if(One_sum(idx+1,ds,arr,n,s,sum)==true){
        return true;
    }

    return false;
}

int main(){
    int n=3;
    int arr[]={1,2,1};
    int sum=2;
    vector<int> ds;
    One_sum(0,ds,arr,n,0,sum);

    return 0;
}