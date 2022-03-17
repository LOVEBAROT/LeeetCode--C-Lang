vector<int> duplicates(int arr[], int n) {
       // code here
       set<int> s;
       vector<int> v;
       sort(arr, arr+n);
       for(int i=0; i<n; i++){
           if(arr[i] == arr[i+1]){
               s.insert(arr[i]);
           }
       }
       
       if(s.size() != 0){
            v.assign(s.begin(), s.end());
            return {v};
       }
       
       return {-1};
       
     
   
    }