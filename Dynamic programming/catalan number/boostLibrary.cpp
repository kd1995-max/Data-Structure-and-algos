cpp_int catalan(int n)
    {
        cpp_int cat_ = 1;
        
        for (cpp_int i = 1; i <=n; i++)
        {
            cat_ *= (4 * i - 2);
            cat_ /= (i + 1);
            
        }
        
        return cat_;
    }
    cpp_int findCatalan(int n) 
    {
        //code here
        return catalan(n);
    }
