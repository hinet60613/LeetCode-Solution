class Solution {
public:
    int getSum(int a, int b) {
        unsigned int carry = a & b;
        unsigned int result = a ^ b;
        while(carry != 0) {
            unsigned int shiftedcarry = carry << 1;
            carry = result & shiftedcarry;
            result ^= shiftedcarry;
        }
        return result;
    }
};
