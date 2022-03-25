#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int MaxAnd,MaxOr,MaxXor;
    int CountAnd = 0;
    int CountOr = 0;
    int CountXor = 0;
  for (int i =1;i<n;i++)
  {
      for(int j = i+1;j<=n;j++)
      {
          if(((i&j) < k) &&  ((i&j) > CountAnd))
          {
              CountAnd = (i&j);
          }
          if(((i|j) < k) && ((i|j) > CountOr))
          {
              CountOr = (i|j);
          }
          if(((i^j) < k) && ((i^j) > CountXor))
          {
              CountXor = (i^j);
          }
      }
  }
  printf("%d\n%d\n%d",CountAnd,CountOr,CountXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
