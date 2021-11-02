bool isRotated(string str1, string str2)
    {
        // Your code here
        string clock_temp = str1;
        string antiClock_temp = str1;
        
             rotate(clock_temp.begin(), clock_temp.begin() + 2, clock_temp.end());
             
             rotate(antiClock_temp.begin(), antiClock_temp.begin() + antiClock_temp.length()-2, antiClock_temp.end());
             
             if(clock_temp == str2)
             return true;
             
             if(antiClock_temp == str2)
             return true;
        
        
        
        return false;
    }
