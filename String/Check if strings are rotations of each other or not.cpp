bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length() != s2.length())
        return false;
        // npos is a static member constant value with the greatest possible value for an element of type size_t.
        
        // This value, when used as the value for a len (or sublen) parameter in string's member functions, means "until the end of the string".
        
        // As a return value, it is usually used to indicate no matches.
        
        // This constant is defined with a value of -1, which because size_t is an unsigned integral type, it is the largest possible representable value for this type.
        return ((s1+ s1).find(s2) != string::npos);
    }
