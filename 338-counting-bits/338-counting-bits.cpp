class Solution
{
    public:
        vector<int> res;
    int help(int num)
    {   
        cout<<num<<" ";
        if (res[num] != -1)
            return res[num];
        if (num == 0)
        {
            
            res[0] = 0;
            cout<<"here"<<" ";
            return 0;
        }

        if (num % 2 == 0)
            return res[num] = help(num / 2);
        else
        {
            return res[num] = help(num / 2) + 1;
        }
    }

    vector<int> countBits(int n)
    {
        res = vector<int> (n+1, -1);

        for (int i = n; i >= 0; i--)
        {
           	if (res[i] == -1)
            help(i);
        }
        return res;
    }
};