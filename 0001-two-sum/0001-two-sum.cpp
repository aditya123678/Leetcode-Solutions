class Solution {
public:
    vector<int> twoSum(vector<int>& no, int ta)
    {
        for(int i=0;i<no.size();i++)
        {
            for(int j=i+1;j<no.size();j++)
            {
                if((no[i]+no[j])==ta)
                {
                    return{i,j};
                }
            }
        }
        return{-1,-1};
    }
};