class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> sp;

        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            if(ch == '(' || ch == '[' || ch == '{')
            {
                sp.push(ch);
            }
            else
            {
                if(sp.empty())
                {
                    return false;
                }

                if(ch == ')' && sp.top() != '(')
                {
                    return false;
                }

                if(ch == ']' && sp.top() != '[')
                {
                    return false;
                }

                if(ch == '}' && sp.top() != '{')
                {
                    return false;
                }

                sp.pop();
            }
        }

        if(sp.empty())
        {
            return true;
        }

        return false;
    }
};