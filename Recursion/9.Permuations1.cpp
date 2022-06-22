// Permuatations of an array (all unique elements)

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