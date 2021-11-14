long long countPairs(int a[],int n){
   // To find minimum and maximum of
    // the array
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
 
    // to find the count of minimum and
    // maximum elements
    int c1 = 0;
    int c2 = 0; // Count variables
    for (int i = 0; i < n; i++) {
        if (a[i] == mn)
            c1++;
        if (a[i] == mx)
            c2++;
    }
 
    // condition for all elements equal
    if (mn == mx)
        return n * (n - 1) / 2;
    else
        return c1 * c2;
 
}

