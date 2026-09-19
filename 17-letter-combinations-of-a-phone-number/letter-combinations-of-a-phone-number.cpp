class Solution {
public:
void make(int index,string digits,string curr,  vector<string>&res, string arr [])
{
    if(index == digits.size()){
    res.push_back(curr);
    return;}
    int temp = digits[index] - '2';
    for( int i = 0; i < arr[temp].size(); i++)
    {
        make(index + 1,digits,curr + arr [temp][i],res,arr);
    }
}
    vector<string> letterCombinations(string digits) {
         string arr[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
         string curr = "";
         vector<string>res;
         make(0,digits,curr,res,arr);
         return res;
    }
};