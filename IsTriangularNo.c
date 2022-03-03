int isTriangular(int N){
        int count = 0;
        for (int i = 1;i <= N;i++)
        {
            count = count + i;
            if(count == N)
            {
                return 1;
            }else{
                continue;
            }
        }
        return 0;
    }