class Solution {
public:
    int minimizeXor(int num1, int num2) {
        // Count the number of set bits in num2
        int setBitsInNum2 = __builtin_popcount(num2);
        
        int result = 0;
        // Fill bits in result from num1 where possible
        for (int i = 31; i >= 0 && setBitsInNum2 > 0; --i) {
            if (num1 & (1 << i)) {
                result |= (1 << i);
                --setBitsInNum2;
            }
        }
        
        // If still need more set bits, set them from the least significant side
        for (int i = 0; i <= 31 && setBitsInNum2 > 0; ++i) {
            if (!(result & (1 << i))) {
                result |= (1 << i);
                --setBitsInNum2;
            }
        }
        
        return result;
    }
};
