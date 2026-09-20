class Solution {
public:
    int reverseDegree(string s) {
         int degree = 0;
         for(int i = 0; i < s.size(); ++i)
         {
            int position = 26 -(s[i] - 'a');
           // cout << position << endl;
            degree += position  * (i + 1); 
         }
         return degree;
    }
};