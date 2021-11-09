vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        if(pow(b,2)-4*a*c < 0)
        return {-1};
        
        double r1 = floor((double)(-b+(sqrt(b*b-4*a*c)))/(2*a));
        double r2 = floor((double)(-b-(sqrt(b*b-4*a*c)))/(2*a));
        
        return {max(r1,r2),min(r1,r2)};
    }
