 static bool isprime(int n)
   {
       if(n<=1)
       {
           return false;
       }
       for(int i=2;i<=sqrt(n);i++)
       {
           if(n%i==0)
           {
               return false;
           }
       }
       return true;
   }
   static long largestPrimeFactor(int N) {
       long result=0;
       for(int i=2;i<=N;i++)
       {
           if(N%i==0)
           {
               if(isprime(i))
               {
                   result=i;
               }
           }
       }
       
       return result;
       
   }