class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        int max=0;
       
        for(int i=n-1;i>=0;i--){
            if(max<=a[i]){
                max=a[i];
                v.push_back(max);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};