class Solution {
public:
    bool isPalindrome(string str) 
    {
        string s = "";

        for(int i = 0; i < str.length(); i++)
        {
            if(isalnum(str[i]))
            {
                s += tolower(str[i]);
            }
        }
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }  
        return true;  
    }
};