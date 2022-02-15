 int gcd(int N, int arr[])
    {
    	if(N==1)
         return arr[0];
        int ans = arr[0];
        for(int i=1;i<N;i++)
        {
            ans = __gcd(ans,arr[i]);
        }
        return ans;
    }