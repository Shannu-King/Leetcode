class Solution {
public:
    int scoreOfParentheses(string s) {
       stack<pair<char,int>> scores;
       
       scores.push({'#',0});
       for(int i = 0; i < s.size(); ++i)
       {
        if(s[i] == '(')
        {
            scores.push({'(', 0});
        }
        else
        {
            int ss = scores.top().second;
            scores.pop();
            if(ss == 0)
            {
                auto l = scores.top().second;
                scores.pop();
                scores.push({'(',l + 1});



            }
            else
            {
               auto l = scores.top().second;
               scores.pop();

                scores.push({'(' ,l + 2 * ss });
            }
        }
      //  cout << scores.top().second << " " << scores.size() << endl;
       }

        return scores.top().second;
    }
};