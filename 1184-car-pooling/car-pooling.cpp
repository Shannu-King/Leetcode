class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
         sort(trips.begin(), trips.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1]; 
    });
    int tripSize = trips.size();
    for(int i = 0; i < tripSize; i++)
    {
        int currCapacity = trips[i][0];
        for(int j = i - 1; j >= 0; j--)
        {
            if(trips[i][1] < trips [j][2])
            currCapacity += trips [j][0];
        }
        if(currCapacity > capacity)
        return false;

    }
    return true;
    }
};