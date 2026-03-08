class Solution {
public:
string toBinary(int num, int n) {
    string binary = "";
    while (num > 0) {
        binary = (char)('0' + (num % 2)) + binary;
        num /= 2;
    }
    while (binary.size() < n) { 
        binary = '0' + binary;
    }
    return binary;
}
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums[0].size();
        for(int i=0;i<17;i++)
        {
            string target=toBinary(i,n);
            if(find(nums.begin(),nums.end(),target)==nums.end())
            {
                return target;
            }
        }
        return "FUCK YOU";
    }
};