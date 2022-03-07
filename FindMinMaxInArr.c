struct pair getMinMax(long long int arr[], long long int n) {
    long long int tempMin = arr[0];
    long long int TempMax = arr[0];
    for (int i = 0;i< n; i++)
    {
        if(arr[i] < tempMin)
        {
            tempMin = arr[i];
        }
        if(arr[i] > TempMax)
        {
            TempMax = arr[i];
        }
    }
    
    struct pair res;
    res.min = tempMin;
    res.max = TempMax;
    return res;
}