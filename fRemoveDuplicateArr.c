   int remove_duplicate(int a[],int n){
        int idx = 0;
        for(int i = 0; i < n; i++){
            if(a[idx] != a[i]){
                idx++;
                a[idx] = a[i];
            }
        }
        return idx + 1;
    }
};
