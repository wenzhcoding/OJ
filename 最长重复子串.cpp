class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        if (s.length()==1) return s;
        int start = 0, max_length = 1;
        for(int i=0;i<s.length();i++)
        {
            for(int j = i+1;j<s.length();j++)
            {
                int left,right;
                for(left=i,right=j;left<right;left++,right--)
                {
                    if(s[left]!=s[right])
                    {
                         break;
                    }                  
                }
                if(left>=right && j-i+1>max_length)
                {
                    max_length = j-i+1;
                    start = i;
                }
            }
        }
        return s.substr(start,max_length) ;
        
    }
};