#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findCombination(int idx, vector<int> &arr, int target , vector<vector<int>> &ans, vector<int> &ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i =idx;i<arr.size();i++){
        if(i>idx && arr[i]==arr[i-1]) continue;
        if(arr[i]<=target){
            ds.push_back(arr[i]);
            findCombination(i+1,arr,target-arr[i],ans,ds);
            ds.pop_back();
        }
    }
}

vector<vector<int>> combination(vector<int> &candidate,int target){
    sort(candidate.begin(),candidate.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0,candidate,target,ans,ds);
    return ans;

}

int main(){
    vector<int> candidate = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> result=combination(candidate,target);
    cout<<"["<<endl;
    for(auto &combination : result){
        cout<<"[";
        for(auto it:combination){
            cout<<it<<" ";
        }
        cout<<"],";
        cout<<endl;
    }
    cout<<"]";
    return 0;
}