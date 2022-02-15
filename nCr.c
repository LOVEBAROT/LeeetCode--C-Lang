long long int factorial(int N){
       long long int ans = 1;
       for(int i=N;i>0;--i)
       {
           ans *= i;
       }
       return ans;
    }
    int nCr(int n, int r){
        if(n < r)
        {
            return 0;
        }
        else{
            return (factorial(n) / (factorial(n - r) * factorial(r)));
        }
    }