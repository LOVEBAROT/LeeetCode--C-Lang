int solution(int arr[], int n)
{
    if(n==1)
     return arr[0];
    int a=arr[0];
    int b=arr[1];
    for(int i=2;i<n;i++)
    {
        a=__gcd(a,b);
        b=arr[i];
    }
    return a;
}