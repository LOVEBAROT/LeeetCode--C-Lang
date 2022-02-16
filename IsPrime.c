int isPrime(int N){
        if (N == 1)
        {
            return 0;
        }
        int IsPrimeNo = 1;
        for (int i = 2;i < (N/2);i++)
        {
            if((N % i) == 0)
            {
                IsPrimeNo = 0;
                break;
            }
        }
        return IsPrimeNo;
    }