#include <stdio.h>
int isPrime(int n)
{
    int No = 1;
    for(int i = 2; i <= (n/2);i++)
    {
        if (n % i == 0)
        {
            No = 0;
            break;
        }
    }
   return No;
}
int main()
{
    int n,count = 0;
    printf("Enter NO");
    scanf("%d",&n);
    int arr[400] = {0};
    int ArrPos = 0;
    for(int i = 2;i <= n;i++)
    {
        int Result = isPrime(i);
        if(Result == 1)
        {
            arr[ArrPos] = i;
            ArrPos++;
        }
    }
    for(int k = 0; k < ArrPos;k++)
    {
        for(int l = 0; l < ArrPos;l++)
        {
            if ((arr[k] * arr[l]) <= n)
            {
                printf("%d %d ",arr[k],arr[l]);
            }
        }
    }
    return 0;
}
