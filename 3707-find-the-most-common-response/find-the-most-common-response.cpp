class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        vector<set<string>>res;
        for(int i=0;i<responses.size();i++)
        {
            set<string>temp;
            for(int j=0;j<responses[i].size();j++)
            {
                temp.insert(responses[i][j]);
            }
            res.push_back(temp);
        }
        
        map<string,int>mp;
        for(int i=0;i<res.size();i++)
        {
             for (const string& s : res[i])
              {
            mp[s]++;
        } 
             

            }
         string result = "";
    int maxFreq = 0;

    for (auto& pair : mp) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            result = pair.first;
        } else if (pair.second == maxFreq) {
            if (pair.first < result) {
                result = pair.first;
            }
        }
    }
    return result;

    }
};