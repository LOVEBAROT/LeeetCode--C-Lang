long long int prime_Sum(int n)
   	{
        vector<bool>vis(n+1, true);
   		long long int sum = 0;
   		for(int i = 2; i * i <= n; i++)
   			if(vis[i])
   				for(int j = i*i; j <= n; j+=i)
   					vis[j] = false;
   		for(int i = 2; i <= n; i++)
   			if(vis[i])
   				sum += i;
   		return sum;   
   	}