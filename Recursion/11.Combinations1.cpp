/* Given an array of distinct integers candidates and a target integer target, 
return a list of all unique combinations of candidates where the chosen numbers sum to target. 
You may return the combinations in any order.
The same number may be chosen from candidates an unlimited number of times.
Two combinations are unique if the frequency of at least one of the chosen numbers is different.
*/
class Solution {
public:
    
    void helper(vector<int> &arr, vector<vector<int>> &ans, int pos,int tar, vector<int> &ds){
        if(pos==arr.size()){
            if(tar==0){
               ans.push_back(ds);   
            }
            return;
        }
        
        if(tar>=arr[pos]){
          ds.push_back(arr[pos]);
          helper(arr,ans,pos,tar-arr[pos],ds);
          ds.pop_back();    
        }
        
                
        helper(arr,ans,pos+1,tar,ds);
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> ds;
        
        helper(candidates,ans,0,target,ds);
        return ans;
    }
};