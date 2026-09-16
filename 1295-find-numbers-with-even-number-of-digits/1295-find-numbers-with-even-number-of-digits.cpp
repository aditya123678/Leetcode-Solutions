class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int res=0;
        int cnt;
        for(int i=0;i<nums.size();i++)
        {
            cnt=0;
            while(nums[i]!=0)
            {
                nums[i]=nums[i]/10;
                cnt++;
            }
            if(cnt%2==0)
            {
                res++;
            }
        }
        return res;
    }
};