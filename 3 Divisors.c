
int fFindDivisors(long N)
    {
        int count = 0;
        for (int i = 1;i <= N;i++)
        {
            if(N % i == 0)
            {
                count++;
            }
        }
        return count;
    }

vector<int> threeDivisors(vector<long long> query, int q)
    {
       vector<int> v;
       for (int i = 0;i < q;i++)
       {
            int Res = 0;
            int VecCount = query[i];
            for(int j = 1;j < VecCount;j++)
            {
                int DivCount = fFindDivisors(j);
                if(DivCount == 3)
                {
                    Res++;
                }
            }
           v.push_back(Res);
       }
       return v;
    }