class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int a = source[0], b = source[1];
        int c = target[0], d = target[1];
        if(a == c && b ==d)
        return 0;
        else if( a== c || b == d)
        return 1;
        else if(abs(a-c) == abs(b-d))
        return 1;
        return 2;
    }
};