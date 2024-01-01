#include<iostream>
#include<vector>
using namespace std;

void findCombination(int idx, vector<int> &arr,int target, vector<vector<int>> &ans , vector<int> &ds){
    if(idx==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[idx]<=target){
        ds.push_back(arr[idx]);
        findCombination(idx,arr,target-arr[idx],ans,ds);
        ds.pop_back();
    }
    findCombination(idx+1,arr,target,ans,ds);
}

vector<vector<int>> combinationSum(vector<int> &candidate, int target){
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, candidate,target, ans , ds);
    return ans;
}

int main(){
    vector<int> candidate = {2,3,6,7};
    int target = 7;
    vector<vector<int>> result=combinationSum(candidate,target);
    for(auto combination:result){
        cout<<"[";
        for(auto it : combination){
            cout<<it<<" ";
        }
        cout<<"]"<<endl;
    }


    return 0;
}