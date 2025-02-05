class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length() > k){
        string new_ = "";
        for(int i = 0; i < s.length(); i += k){
             int num  = 0;
            for(int j = i; j < i+ k && j < s.length(); j++){
                num += (s[j] - '0'); 
            }
            new_ += to_string(num);
        }
        s = new_;    
        }
        return s;
    }
};