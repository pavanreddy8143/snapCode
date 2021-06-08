int Solution::strStr(const string A, const string B) {
    if(B== "")
        return -1;
    int found = A.find(B);
    if(found != string::npos){
        return found;
    }
    return -1;
    
}
