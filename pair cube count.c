int cube(int num)
  {
      return num * num * num;
  }
    int pairCubeCount(int N) {
        int count = 0;
        for(int i = 1;i <= cbrt(N);i++)
        {
            for(int j = 0; j <= cbrt(N);j++)
            {
                if((cube(i) + cube(j)) == N)
                {
                   // cout << i << j << endl;
                    if ((i == 0) or (j == 0))
                    {
                        count++;
                        break;
                    }else{
                        count++;
                    }
                }
            }
        }
        return count;
    }