int Countpair(int arr[], int n, int sum){
        int pairs = 0;
        
       for(int i=0;i<n-1;i++)
       {
           for (int j=i+1;j<n;j++)
           {
               if(arr[i]+arr[j]==sum)
               {
                   pairs +=1;
               }
           }
       }
       if(pairs)
       {
           return pairs;
       }else{
           return -1;
       }
    }