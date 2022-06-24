/* You are given an array ‘Arr’ of ‘N’ positive integers. You are also given a positive integer ‘target’.
Your task is to find all unique combinations of the array ‘Arr’ whose sum is equal to ‘target’. Each number in ‘Arr’ may only be used once in the combination.  */


#include<bits/stdc++.h>

void helper(int pos, vector<int> &arr, int t, vector<int> &ds, vector<vector<int>> &ans){
    if(pos>=arr.size()){
        if(t==0){
            ans.push_back(ds);
        }
        return;
    }
    
    if(arr[pos]<=t){
        ds.push_back(arr[pos]);
        helper(pos+1,arr,t-arr[pos],ds,ans);
        ds.pop_back();
    }
    
    while(pos+1<arr.size() and arr[pos]==arr[pos+1]) pos++;
    helper(pos+1,arr,t,ds,ans);
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int tar)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(), arr.end());
    
    helper(0,arr,tar,ds,ans);
    return ans;
}
