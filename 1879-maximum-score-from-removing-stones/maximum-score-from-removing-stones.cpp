class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>q;
        q.push(a);
        q.push(b);
        q.push(c);
        int sum=a+b+c;
        int count=0;
        while(1)
        {
            int k=q.top();
            q.pop();
            k=k-1;
            int l=q.top();
            if(l==0)
            break;
            l=l-1;
            q.pop();
            q.push(k);
            q.push(l);
            sum-=2;
            count++;
        }
        return count;
    }
};