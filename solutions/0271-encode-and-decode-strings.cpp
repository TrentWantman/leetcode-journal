// 271. Encode and Decode Strings
// Medium | Array
// https://leetcode.com/problems/encode-and-decode-strings/
// Time: O(n) | Space: O(n)

class Solution {
public:

    //string encoded_string = encode(strs);
    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        string encoded_string = "";
        string new_string;
        
        for(string s : strs){
            encoded_string += to_string(s.length()) + "#" + s;
        }

        return encoded_string;
    }

    //vector<string> strs2 = decode(encoded_string);
    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<string> strs;
        int pos = 0;
        while (pos < s.length()){
            int hash = s.find("#", pos);
            int to_read = stoi(s.substr(pos, hash - pos));
            string new_string = s.substr(hash + 1, to_read);
            pos = hash + 1 + to_read;
            strs.push_back(new_string);
        }
        
        return strs;
    }
};
