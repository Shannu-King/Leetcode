class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

        string bin = "";

        while(n > 0){
            bin = char((n % 2) + '0') + bin;
            n /= 2;
        }

        for(int i = 0; i < bin.size(); i++){
            if(bin[i] == '0')
                bin[i] = '1';
            else
                bin[i] = '0';
        }

        int ans = 0;
        for(char c : bin){
            ans = ans * 2 + (c - '0');
        }

        return ans;
    }
};