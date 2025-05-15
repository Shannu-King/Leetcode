class Solution {
public:
 pair<int, int> parse(string num) {
        int plusPos = num.find('+');
        int real = stoi(num.substr(0, plusPos));
        int imag = stoi(num.substr(plusPos + 1, num.size() - plusPos - 2)); 
        return {real, imag};
    }
    string complexNumberMultiply(string nums1, string nums2) {
          auto [a, b] = parse(nums1); 
        auto [c, d] = parse(nums2);
        int real = a * c - b * d;
        int imag = a * d + b * c;

        return to_string(real) + "+" + to_string(imag) + "i";

    }
};