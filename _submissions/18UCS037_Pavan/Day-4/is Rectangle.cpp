int Solution::solve(int A, int B, int C, int D) {
    if (A == B ==C == D){
        return 1;
    }
    else if(A == B && C ==D){
        return 1;
    }
    else if(A == D && C ==B){
        return 1;
    }
    else if(A == C && D ==B){
        return 1;
    }
    else{
        return 0;
    }
    
}
