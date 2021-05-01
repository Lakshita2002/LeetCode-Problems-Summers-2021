class Solution {
public:
    string replaceDigits(string s) {
        
    int n = s.length();

    for(int i=1; i<n;){
        s[i] = s[i-1]+int(s[i]-'0');
        i += 2;
    }

    return s;
        
    }
};