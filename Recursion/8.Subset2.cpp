// Print all subsets which has duplicates (print only unique)

class Solution {
public:
    
    void helper(int pos, vector<int> &ds, vector<vector<int>> &ans, vector<int> arr){
        ans.push_back(ds);

        for(int i=pos;i<arr.size();i++){
            if(pos!=i and arr[i]==arr[i-1]) continue;
            ds.push_back(arr[i]);
            helper(i+1,ds,ans,arr);
            ds.pop_back();
        }    
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        helper(0,ds,ans,nums);
        return ans;
    }
};