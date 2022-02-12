
void push(stack<int>& s, int a){
	// Your code goes here6
	s.push(a);
}
 
bool isFull(stack<int>& s,int n){

    return s.size() >= n;
}
 
bool isEmpty(stack<int>& s){
	// Your code goes here
    return s.empty();
}
 
int pop(stack<int>& s){
	// Your code goes here
    if(s.empty())
    return -1;
    
    int x = -1;    
    x = s.top();
    s.pop();

    return x;
}
 
int getMin(stack<int>& s){
	// Your code goes here
    stack<int> ss(s);
    int min_= 1e6;
    while (!ss.empty())
    {
        min_ =  min(ss.top() , min_);
        ss.pop();
    }
    return min_;
}
