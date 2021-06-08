string Solution::solve(string A) {
    string s;
    int n = A.size();
    int freq[26]={0};
    queue<int>q;
    for(int i=0;i<n;i++){
        freq[A[i]-'a']++;
        q.push(A[i]);
        while(!q.empty()){
            if(freq[q.front()-'a']>1){
                q.pop();
            }
            else{
                s.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            s.push_back('#');
        }
    }
    return s;
    
}