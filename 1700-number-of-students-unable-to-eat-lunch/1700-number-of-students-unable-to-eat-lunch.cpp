class Solution 
{
public:
    queue<int> q;
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        for(int i:students)
        {
            q.push(i);
        }
        int i=0;
        int cnt=0;
        while(!q.empty() && cnt<q.size())
        {
            if(q.front()==sandwiches[i])
            {
                q.pop();
                i++;
                cnt=0;
            }
            else
            {
                int temp=q.front();
                q.pop();
                q.push(temp);
                cnt++;
            }
        }
        return q.size();
    }
};