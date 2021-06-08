int Solution::singleNumber(const vector<int> &A){
    int n = A[0];
    for(int i=1;i<A.size();i++){
        n ^=A[i];
    }
    return n;
    
}

