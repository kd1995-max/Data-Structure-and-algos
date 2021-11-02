string printNumber(string s, int n) 
{
    //code here
    string str = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'c' || s[i] >= 'A' && s[i] <= 'C')
        str += '2';
        else if(s[i] >= 'd' && s[i] <= 'f' || s[i] >= 'D' && s[i] <= 'F')
        str += '3';
        else if(s[i] >= 'g' && s[i] <= 'i' || s[i] >= 'G' && s[i] <= 'I')
        str += '4';
        else if(s[i] >= 'j' && s[i] <= 'l' || s[i] >= 'J' && s[i] <= 'L')
        str += '5';
        else if(s[i] >= 'm' && s[i] <= 'o' || s[i] >= 'M' && s[i] <= 'O')
        str += '6';
        else if(s[i] >= 'p' && s[i] <= 's' || s[i] >= 'P' && s[i] <= 'S')
        str += '7';
        else if(s[i] >= 't' && s[i] <= 'v' || s[i] >= 'T' && s[i] <= 'V')
        str += '8';
        else if(s[i] >= 'w' && s[i] <= 'z' || s[i] >= 'W' && s[i] <= 'Z')
        str += '9';
    }
    return str;
}
