int Solution::isPalindrome(int A) {
    int rev = 0,temp = A,rem;
    while(A>0){
        rem = A%10;
        rev = rev*10+rem;
        A/=10;
    }
    if(rev==temp){
        return true;
    }
    return false;
}
