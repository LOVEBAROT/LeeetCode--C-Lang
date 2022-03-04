int fibonacciDigits(long long N){
      long long arr[300];
      //after 300 every last two digit are repeated
        arr[1] = 1;
        arr[2] = 1;
        for (int i = 3; i < 300; i++)
        arr[i] = (arr[i-2]+arr[i-1]) % 100;
        
        return arr[N % 300];
    }