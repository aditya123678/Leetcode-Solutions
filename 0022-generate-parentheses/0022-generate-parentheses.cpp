class Solution {
public:
    vector<string> ans;

    void fun(string s, int o, int c, int n) {
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (o < n)
            fun(s + "(", o + 1, c, n);

        if (c < o)
            fun(s + ")", o, c + 1, n);
    }

    vector<string> generateParenthesis(int n) {
        fun("", 0, 0, n);
        return ans;
    }
};