class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> maxHeap;
        unordered_map<char, int> freqMap;
        int tasksSize = tasks.size();
        for(int i = 0; i < tasksSize; i++)
        {
            freqMap[tasks[i]]++;
        }
        for(const auto &it : freqMap)
        {
            maxHeap.push(it.second);
        }
       int totalTime = 0;
        while(!maxHeap.empty())
        {
            vector<int> temp;
             int cycleCount = n + 1;
             while(cycleCount > 0 && ! maxHeap.empty())
             {
                int count = maxHeap.top();
                maxHeap.pop();
                cycleCount--;
                totalTime ++;
                count --;
                if(count > 0)
                temp.push_back( count );

             }
            
             for(const auto &it:temp)
             maxHeap.push(it);
              if(!maxHeap.empty())
             totalTime += cycleCount;


        }
        return totalTime;
    }
};