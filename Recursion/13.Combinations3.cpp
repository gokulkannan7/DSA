/* Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order. */

class Solution {
public:
    
    void helper(int pos,int sum, int max_ele, int target, vector<vector<int>> &ans, vector<int> &ds){
        
        if(max_ele==0){
            if(sum==target){
                ans.push_back(ds);
            }
            return;
        }
        if(pos==10) return;
        
        ds.push_back(pos);
        sum += pos;
        helper(pos+1,sum,max_ele-1,target,ans,ds);
        sum-= pos;
        ds.pop_back();
        
        helper(pos+1,sum,max_ele,target,ans,ds);
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        int sum=0;
        helper(1,sum,k,n,ans,ds);
        return ans;
    }
};