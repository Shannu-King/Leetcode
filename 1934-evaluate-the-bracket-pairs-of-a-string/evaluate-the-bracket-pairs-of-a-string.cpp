class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> freqMap;
        for(int i = 0; i < knowledge.size(); ++i)
        {
            freqMap[knowledge[i][0]] = knowledge[i][1];
        }
        string temp = "";
        string res = "";
        bool flag = false;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i]==')')
            {
                if(freqMap.find(temp) != freqMap.end())
                res += freqMap[temp];
                else
                res += "?";
                flag = false;
                temp = "";
            }
            else if(s[i] == '(')
            {
                flag = true;
            }
            else if(flag)
            {
                temp += s[i];
            }
            else
            res += s[i];
        }
        return res;
    }
};