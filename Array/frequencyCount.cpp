void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        for(int i=0;i<N;i++)
            arr[i]--;
            
        for(int i=0;i<N;i++)
            if(arr[i]%P < N)
                arr[arr[i]%P] += P;
        
        for(int i=0;i<N;i++)
            arr[i] /= P;
    }
