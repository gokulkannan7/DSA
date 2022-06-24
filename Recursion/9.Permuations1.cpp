// Permuatations of an array (all unique elements)
/* 1. Extra space  */

class Solution {
public:
    
    void helper(vector<int> &nums, vector<vector<int>> &ans,int freq[], vector<int> &ds){
        
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
           if(!freq[i]){
           freq[i] = 1;
           ds.push_back(nums[i]);
           helper(nums,ans,freq,ds);
           ds.pop_back();
           freq[i] = 0;  
         }     
        }    
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i] = 0;
        vector<int> ds;
        helper(nums,ans,freq,ds);
        return ans;
    }
};
///////////////////////   

/* No space used */

#include<bits/stdc++.h>

void perm(int pos, string &s, vector<string> &ans){
    
    if(pos==s.size()){
        ans.push_back(s);
        return;
    }
    
    for(int i=pos;i<s.size();i++){
        swap(s[pos],s[i]);
        perm(pos+1,s,ans);
        swap(s[pos],s[i]);
    }
    
}

vector<string> generatePermutations(string &str){
     vector<string> ans;
     perm(0,str,ans);
    sort(ans.begin(), ans.end());
    return ans;
}