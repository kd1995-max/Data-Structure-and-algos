void arrange(long long arr[], int n) {
        // Your code here
        int comeBack_toOrignal = n;
        for(int i = 0; i < n; i++)
        {
            arr[i] = (arr[arr[i]]%comeBack_toOrignal)*comeBack_toOrignal + arr[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            arr[i] /= comeBack_toOrignal;
        }
    }
