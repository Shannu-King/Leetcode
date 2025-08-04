class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int end=0;
       int ans=0;
       map<int,int>mp;
       for(int start=0;start<fruits.size();start++)
       {
        mp[fruits[start]]++;
        if(mp.size()>2)
        {
            mp[fruits[end]]--;
                if(mp[fruits[end]]==0)
                mp.erase(fruits[end]);
           
             
            end++;

        }
        ans=max(ans,start-end+1);
       }
       return ans;
    }
};