bool isSubSequence(string A, string B)
    {
        //code here
        if(A.length() == 0 || B.length() == 0 )
        return true;
        
        int i = 0; 
        int j = 0;
        
        while(i < A.length() && j < B.length())
        {
            if(A[i] == B[j])
            i++;
            
            if(A.length() == i)
            return true;
            
            j++;
        }
        
        return false;
    }
