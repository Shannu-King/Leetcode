class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        if(ceil(sum / 9.0) > num)
        return "";
       string res = "";
       while(res.size() < num)
       {
        if(sum == 0)
        res.push_back('0');
        else if(sum <= 9)
        {
            res.push_back(sum + '0');
            sum = 0;
        }
        else
        {
            res.push_back('9');
            sum -= 9;
        }
       }
       return res;

    }
};