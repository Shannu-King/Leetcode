class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
    //      sort(trips.begin(), trips.end(), [](const vector<int>& a, const vector<int>& b) {
    //     return a[1] < b[1]; 
    // });
    vector<int>change(1001 ,0);
    int tripSize = trips.size();
    for(int i = 0; i < tripSize; i++)
    {
        change[trips[i][1]] += trips[i][0];
        change[trips[i][2]] -= trips[i][0];

    }
    int currCapacity = 0;
    for(int i = 0; i < 1001; i++)
    {
        currCapacity += change[i];
        if(currCapacity > capacity)
        return false;
    }
    return true;
    }
};