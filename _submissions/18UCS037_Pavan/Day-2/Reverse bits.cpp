unsigned int Solution::reverse(unsigned int A) {
    int result = 0;
    for(int i=0;i<32;i++){
        result <<=1;
        if((A & 1) == 1)
            result++;
            
        A >>=1;
    }
    return result;
}
