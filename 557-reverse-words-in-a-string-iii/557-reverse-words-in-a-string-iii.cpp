class Solution {
public:
    void reverse(string& s, int start, int end)
    {
        while(start < end)
        {
            swap(s[start++], s[end--]);
        }
    }
    string reverseWords(string s) {
        int start = 0, end = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                end = i-1;
                reverse(s, start, end);
                start = ++i;
            }else if(i == s.size()-1)
            {
                end = i;
                reverse(s, start, end);
            }
        }
        return s;
    }
};