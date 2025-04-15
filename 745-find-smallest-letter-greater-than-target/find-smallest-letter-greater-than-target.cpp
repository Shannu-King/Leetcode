class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int m=target-'a';
        for(int i=0;i<letters.size();i++)
        {
            int k=letters[i]-'a';
            
            if(k>m)
            return letters[i];
        }
        return letters[0];
    }
};