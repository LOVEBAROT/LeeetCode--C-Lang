int maxIndexDiff(int A[], int N) 
    { 
        int maxIndex = 0;
        for(int i = 0;i < N;i++)
        {
            for(int j = i + 1;j < N;j++)
            {
                if(A[i] <= A[j])
                {
                    if((j-i) > maxIndex)
                    {
                        maxIndex = j-i;
                    }
                }
            }
        }
        return maxIndex;
    }