class Solution {
public:
void fun(vector<vector<int>>& ans,vector<int>& res,vector<int>& candidates,int target,int index)
{
    if(index==candidates.size())
    {
        if(target==0)
        ans.push_back(res);
        return;

    }
    if(target>=candidates[index])
    {
        res.push_back(candidates[index]);
        fun(ans,res,candidates,target-candidates[index],index);
        res.pop_back();

    }
    fun(ans,res,candidates,target,index+1);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;

fun(ans,res,candidates,target,0);
return ans;
    }
};