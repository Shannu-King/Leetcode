class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int stringSize = s.size(); 
        unordered_map <char,int> freqMap;
        int windowStart = 0;
        int maximumSubString=0;
        for( int  windowEnd = 0; windowEnd < stringSize ; windowEnd++)
        {
            freqMap[s[windowEnd]]++;
            while(freqMap[s[windowEnd]] > 1)
            {
                freqMap[s[windowStart]] --;
                if (freqMap[s[windowStart]] == 0)
                freqMap.erase(s[windowStart]);
                windowStart ++;
            }
            maximumSubString=max(maximumSubString,windowEnd-windowStart+1);
        }
        return maximumSubString;

    }
};