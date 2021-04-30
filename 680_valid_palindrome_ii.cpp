class Solution {
public:
    bool validPalindrome(string s) {
        
        int n = s.length();
        string s1, s2;
        
        for(int i=0; i<n; i++){
            if(s[i] != s[n-1-i]){
                // 2 possibilities of strings
                s1 = s.substr(0, i)+s.substr(i+1, n);
                s2 = s.substr(0, n-1-i)+s.substr(n-i, n);
                break;
            }
        }
        
        bool flag1 = true;
        bool flag2 = true;
        
        for(int i=0; i<s1.length(); i++){
            if(s1[i] != s1[s1.length()-1-i]) flag1 = false;
        }
        
        for(int i=0; i<s2.length(); i++){
            if(s2[i] != s2[s2.length()-1-i]) flag2 = false;
        }
        
        // take either possibility hence or operator used
        return (flag1 || flag2);
        
    }
};