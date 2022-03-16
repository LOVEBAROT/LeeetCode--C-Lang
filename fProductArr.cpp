vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
    vector<long long int> ans;
       for(int i = 0;i < n;i++)
       {
        long long int result = 1;
           for(int j =0;j<n;j++)
           {
               if(i == j)
               {
                   continue;
               }
               result = result * nums[j];
           }
           ans.push_back(result);
           result = 1;
       }
       return ans;
    }