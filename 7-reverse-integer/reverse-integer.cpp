class Solution {
public:
    int reverse(int x) {
        int sum = 0;
        
        // Use a loop to reverse the digits
        while (x != 0) {
            int r = x % 10;  // Extract the last digit
            x /= 10;         // Remove the last digit from x

            // Check for overflow before updating sum
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && r > 7)) {
                return 0;  // Overflow occurred
            }
            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && r < -8)) {
                return 0;  // Underflow occurred
            }

            sum = sum * 10 + r;  // Update the reversed number
        }
        
        return sum;
    }
};
