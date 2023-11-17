//
// Created by YanHua on 18/11/2023.
//
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x) {
            int y = x % 10;
            x /= 10;
            bool isOverflow = (res > INT_MAX / 10) || (res < INT_MIN / 10);
            if (isOverflow) return 0;
            /* Luckily, we do not need to check the following cases of overflow.
             * if ((a == -1) && (x == INT_MIN)) /* `a * x` can overflow
             * if ((x == -1) && (a == INT_MIN)) /* `a * x` (or `a / x`) can overflow */
            res *= 10;
            isOverflow = (y > 0 && res > INT_MAX - y) || (y < 0 && res < INT_MIN - y);
            if (isOverflow) return 0;
            res += y;
        }
        return res;
    }
};