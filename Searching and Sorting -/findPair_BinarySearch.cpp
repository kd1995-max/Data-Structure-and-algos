bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    for(int i=0;i<size;i++) {
        if(binary_search(arr+i+1,arr+size,n+arr[i])) {
            return true;
        }
    }
    return false;
}
