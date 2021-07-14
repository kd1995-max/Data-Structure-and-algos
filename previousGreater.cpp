void previousGreater(int arr[] , int n)
{

  stack<int> s;
  s.push(arr[0]);
  
  for(int i = 1; i < n; i++)
  {
    while(!s.empty() && arr[top] <= arr[i])
      s.pop();
    
    int span = !s.empty() ? s.top() : -1;
    cout << span << " ";
    
    s.push(arr[i]);
  }
  
  
}
