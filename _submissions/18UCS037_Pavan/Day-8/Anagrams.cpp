vector<vector<int> > Solution::anagrams(const vector<string> &A){
    unordered_map<string,vector<int>>mp;
    for(int i=0;i<A.size();i++){
        string s =A[i];
        sort(s.begin(),s.end());
        mp[s].push_back(i+1);
    }
    vector<vector<int>>ans;
    for(auto it : mp){
        ans.push_back(it.second);
    }
    return ans;
}
