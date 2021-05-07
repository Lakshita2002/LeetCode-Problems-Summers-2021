class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.length();
        string str = "";

        for(int i=0; i<=n-1; i++){
            if(isalpha(s[i])){
                if(isupper(s[i])){
                    str += tolower(s[i]);
                }
                else{
                    str += s[i];
                }
            }
            else if(isdigit(s[i])){
                str += s[i];
            }
            else{
            }
        }

        for(int i=0; i<str.length()/2; i++){
            if(str[i] != str[str.length()-1-i]) return false;
        }
        return true;
        
    }
};