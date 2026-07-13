class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";

        for(int i = 0; i < strs.size(); i++){
            encoded_string += to_string(strs[i].size());
            encoded_string += ".";
            encoded_string += strs[i];
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        

        for(int i = 0; i < s.size();){
            int j = 0;
            int k = 0;
            for(j = i; s[j] != '.'; j++){
                k = j - i + 1;
            }
            int n = stoi(s.substr(i, k));
            string sub = s.substr(i+k+1, n);
            decoded_strs.push_back(sub);
            i += k + 1 + n;
        }

        return decoded_strs;
    }
};
