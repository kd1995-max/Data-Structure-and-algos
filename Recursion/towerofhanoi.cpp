void TOH(int N, int from,int to,int aux)
{
    if(N==1)
    {
        cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        return;
    }
    TOH(N-1,from,aux,to);
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    TOH(N-1,aux ,to ,from);
}
long long toh(int N, int from, int to, int aux) 
{
    // Your code here
    long long ans = pow(2,N) -1;
    if(N==1)
        ans =1;
    TOH(N,from,to,aux);
    return ans;
}
