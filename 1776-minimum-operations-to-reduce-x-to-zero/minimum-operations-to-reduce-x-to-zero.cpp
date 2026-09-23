class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int minOperations = INT_MAX;
        int numSize = nums.size();
        vector<int> prefix(numSize);
        prefix[0] = nums[0];
        unordered_map <int,int>freqMap;

        for(int i = 1; i < numSize; i++)
        {
            prefix[i] = prefix[i-1] + nums[i];
            if(freqMap.find(prefix[i])==freqMap.end())
            freqMap[prefix[i]]=i;
            if(prefix[i] == x)
            minOperations = min(minOperations ,i + 1);
        }
         vector<int> suffix(numSize);
         suffix[numSize - 1] = nums[numSize - 1];
         if(nums[numSize - 1] == x || nums[0] == x)
         return 1;
         if(prefix[numSize - 1] < x)
         return -1;
          int required = 0;
          int rightOperations = INT_MAX;
            for(int i = numSize - 2; i >= 0; --i)
         {
              suffix[i] = suffix[i+1] + nums[i];
            if(suffix[i] == x)
            minOperations = min(minOperations ,numSize - i);
           // cout << 
         }
         for(int i = numSize - 1; i >= 0; --i)
         {
           
              // cout << suffix[i] <<endl;
              required = x - suffix[i];

               if(freqMap.find(required) != freqMap.end()) {
        int prefixIndex = freqMap[required]; 

        if(prefixIndex < i) { 
            int totalOps = (numSize - i) + (prefixIndex + 1);
            rightOperations = min(rightOperations, totalOps); 
        }
    }
            // cout << suffix[i] <<endl;
             
         }
       
       
        // cout<< rightOperations << " " << minOperations<<endl;
       if(minOperations == INT_MAX && rightOperations == INT_MAX)
       return -1;
       return min(minOperations , rightOperations);

       

    }
};