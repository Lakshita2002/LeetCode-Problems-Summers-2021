class Solution {
public:
    string reformatDate(string date) {
        if(date.length()==12){
            date = '0'+date;
        }
        string d = date.substr(0,2);
        string year = date.substr(9);
        unordered_map<string, string> h;
        h.insert({"Jan", "01"});
        h.insert({"Feb", "02"});
        h.insert({"Mar", "03"});
        h.insert({"Apr", "04"});
        h.insert({"May", "05"});
        h.insert({"Jun", "06"});
        h.insert({"Jul", "07"});
        h.insert({"Aug", "08"});
        h.insert({"Sep", "09"});
        h.insert({"Oct", "10"});
        h.insert({"Nov", "11"});
        h.insert({"Dec", "12"});
        string month = h[date.substr(5,3)];
        // cout << date.substr(5,3) << "end" << endl;
        string ans = year+'-'+month+'-'+d;
        return ans;
    }
};