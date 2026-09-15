class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) 
    {
        int max=0;
        for(int i=0;i<acc.size();i++)
        {
            int sum=0;
            for(int j=0;j<acc[i].size();j++)
            {
                sum=sum+acc[i][j];
            }
            if(sum>max)
            {
                max=sum;
            }
        }  
        return max;  
    }
};