class Solution
{
    public:
        string removeDuplicates(string s, int k)
        {

            int n = s.length();
            stack<pair<char, int>> st;

            int count = 1;
            for (int i = 0; i < n; i++)
            {
                if (!st.empty() && s[i] == st.top().first)
                {

                    if (st.top().second == k - 1)
                    {
                        int temp = k-1;
                        st.pop();
                        // while (!st.empty() && temp)
                        // {
                        //     st.pop();
                        //     temp--;
                        // }
                    }
                    else
                    {
                        // st.push({ s[i],
                        //     // st.top().second + 1 });
                        st.top().second++;
                    }
                }
                else if (!st.empty() && s[i] != st.top().first)
                {
                    st.push({ s[i],
                        1 });
                }
                else if (st.empty())
                {
                    st.push({ s[i],
                        1 });
                }
            }
            string res = "";
            while (!st.empty())
            {
                for(int i=0; i<st.top().second; i++)
                    res.push_back(st.top().first);
                // res = st.top().first + res;
                st.pop();
            }
             reverse(res.begin(), res.end());
            return res;
        }
};