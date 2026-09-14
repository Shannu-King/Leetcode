class Solution {
public:
int value(char ch)
{
    switch(ch)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }

    return 0; 
}
    int romanToInt(string s) {
        int result = 0;
        int highValue = 0;
        for(int i = s.size() - 1 ; i >= 0; i--)
        {
            int currValue=value(s[i]);
            if(currValue >= highValue)
            result += currValue;
            else
            result -= currValue;
            highValue=max(highValue,currValue);
        }
        return result;

    }
};