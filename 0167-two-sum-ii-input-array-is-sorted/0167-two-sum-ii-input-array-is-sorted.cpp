class Solution {
public:
    vector<int> twoSum(vector<int>& no, int target) 
    {
        int i=0;
        int j=no.size()-1;
        while(i<j)
        {
            int sum=no[i]+no[j];
            if(sum==target)
            {
                return{i+1,j+1};
            }
            if(sum>target)
            {
                j--;
            }
            if(sum<target)
            {
                i++;
            }
        }  
        return{-1,-1}; 
    }
};