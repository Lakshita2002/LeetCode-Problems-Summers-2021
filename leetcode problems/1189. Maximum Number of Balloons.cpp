class Solution {
public:
    vector<char> count(string text){
        vector<char> ans;
        for(char ch : text){
            if(ch == 'b' or ch == 'a' or ch == 'l' or ch == 'o' or ch == 'n'){
                ans.push_back(ch);
            }
        }
        
        return ans;
    }
    
    int maxNumberOfBalloons(string text) {
        vector<char> ans = count(text);
        int b, a, l, o, n;
        b = a = l = o = n = 0;
        
        for(char ch : ans){
            if(ch == 'b') b++;
            else if(ch == 'a') a++;
            else if(ch == 'l') l++;
            else if(ch == 'o') o++;
            else if(ch == 'n') n++;
        }
        
        int result = min(b, min(o/2, min(l/2, min(b, a))));
        return result;
    }
};