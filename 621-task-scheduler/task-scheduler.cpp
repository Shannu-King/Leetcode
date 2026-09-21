class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freqMap;
        int tasksSize = tasks.size();
        for(int i = 0; i < tasksSize; i++)
        {
            freqMap[tasks[i]]++;
        }

        int maxxCount=0;
        int maxxFreq=0;
        for(const auto & it : freqMap)
        {
            
            if(it.second > maxxFreq)
            maxxFreq=it.second;
        }
         for(const auto & it : freqMap)
        {
            
            if(it.second==maxxFreq)
           maxxCount ++;
        }
        return max((maxxFreq-1) * (n + 1) + maxxCount , tasksSize);
    }
};