class Solution {
public:
    string reorganizeString(string s) {
        priority_queue < pair < int , char >> highPriority;
        int arraySize = s.size();
        unordered_map <char,int> freqMap;
        for(int i = 0; i < arraySize ; i++)
        {
            freqMap[s[i]]++;
        }
        for(const auto &it:freqMap)
        {
            highPriority.push({it.second , it.first});
        }
        string result="";
        while (! highPriority.empty())
        {
            result+=highPriority.top().second;
            auto k=highPriority.top();
            highPriority.pop();
            if(highPriority.empty())
            {
                if(k.first > 1)
                return "";
            }
            if(!highPriority.empty())
            {
                result += highPriority.top().second;
                 auto l = highPriority.top();
                highPriority.pop();
                if(l.first > 1)
                highPriority.push({ l.first-1 , l.second });
            }
             if(k.first > 1)
                highPriority.push({ k.first-1 , k.second });


        }
        return result;
    }
};