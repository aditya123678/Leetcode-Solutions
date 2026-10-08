class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        set<char> sp;
        int left=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            while(sp.find(s[i])!=sp.end())
            {
                sp.erase(s[left]);
                left++;
            }
            sp.insert(s[i]);
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};