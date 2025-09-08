class Solution {
public:
bool containsZero(int n,int m) {
    std::string numStr = std::to_string(n);
    std::string numStr1 = std::to_string(m);
    return numStr.find('0') == std::string::npos && numStr1.find('0') == std::string::npos;
}

    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<=n;i++)
        {
            if(containsZero(i,n-i))
            return {i,n-i};
        }
        return {0,0};
    }
};