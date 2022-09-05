//https://www.youtube.com/watch?v=HgwYYcB-Ql0
//https://www.geeksforgeeks.org/dyck-words-of-given-length/

#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007LL

// Function to calculate (a^n) % mod using binary exponentiation
long long binary_pow(long long a, long long n){
    
    // Using binary exponentiation, we will find a^n in logarithmic time
    long long res = 1;
    while(n){
        
        // We will reduce n to n/2 until it becomes zero
        // We will perform operation according to parity of n
        if(n % 2 == 0){
            
            // If n is even, double a
            a *= a;
            a %= mod;
            n /= 2;
        }
        else{
            
            // If n is odd, multiply a with result
            res *= a;
            res %= mod;
            n--;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        
        // P = Total number of distinct dyck words = Nth Catalan Number 
        // = (2*N)! / (N! * (N+1)!)
        
        // Q = Total number of distinct words using permutations
        // = (2*N)! / (N! * (N)!)
        
        // P/Q = 1 / (N+1)
        // Finding inverse of N+1 using binary exponentiation
        long long ans = binary_pow(N + 1, mod - 2);
        cout << ans << "\n";
    }
    
    return 0;
}
