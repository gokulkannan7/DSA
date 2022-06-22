// Given a list arr of N integers, print sums of all subsets in it.
void helper(int pos, int sum,vector<int> arr, vector<int> &ans){
        
        if(pos>=arr.size()){
            ans.push_back(sum);
            return;
        }
        
        sum += arr[pos];
        helper(pos+1,sum,arr,ans);
        sum -= arr[pos];
        
        helper(pos+1,sum,arr,ans);
        
}

vector<int> subsetSums(vector<int> arr, int N){
        vector<int> ans;
        helper(0,0,arr,ans);
        sort(ans.begin(), ans.end());
        return ans;
}