int MissingNumber(vector<int>& vec, int n) {
        // Your code goes here
    int accu = 1;
    int xorArray = vec[0];
    for (int i = 1; i < n - 1; i++)
    {
        xorArray ^= vec[i];
    }

    for (int i = 2; i <= n; i++)
    {
        accu ^= i;
    }
    
    return (accu ^ xorArray);
    }
