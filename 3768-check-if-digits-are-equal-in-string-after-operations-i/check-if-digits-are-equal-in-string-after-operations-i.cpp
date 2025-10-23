class Solution {
public:
    bool hasSameDigits(string s) {
       
       vector<int> digits(s.begin(), s.end()); 
        for (int&d :digits) 
            d -= '0'; 

       
        while (digits.size()> 2) {
            for (int i = 0; i < digits.size() - 1; i++) {
                digits[i] = (digits[i] + digits[i + 1]) % 10;  
            }
            digits.pop_back();  
        }

        return digits[0] == digits[1];
    }
};