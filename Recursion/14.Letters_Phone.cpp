class Solution {
public:
    
    string freq[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    vector<string> helper(string &d, int i){
       
        if(i==d.size()){
            return {""};
        }
         
        vector<string> rest = helper(d,i+1);
        vector<string> ans;
        string s = freq[d[i]-'0'];
        for(int i=0;i<s.size();i++){
            for(int j=0;j<rest.size();j++){
                ans.push_back(s[i]+rest[j]);
            }
        }
        return ans;
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        return helper(digits,0);
    }
};