class Solution {
public:
    // Helper function to expand around center and return the length of the palindrome
    int expandAroundCenter(string s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;  // Return the length of the palindrome
    }
    
    string longestPalindrome(string s) {
        if (s.empty()) return ""; // Edge case: empty string
        int n = s.size();
        int start = 0, maxLength = 1;  // To store start index and max length of the longest palindrome
        
        for (int i = 0; i < n; i++) {
            // Case 1: Odd-length palindromes (centered at a single character)
            int len1 = expandAroundCenter(s, i, i);
            // Case 2: Even-length palindromes (centered between two characters)
            int len2 = expandAroundCenter(s, i, i + 1);
            int len = max(len1, len2);  // Get the longer palindrome
            
            // If we found a longer palindrome, update start and maxLength
            if (len > maxLength) {
                start = i - (len - 1) / 2;  // Calculate new start index
                maxLength = len;            // Update the maximum length
            }
        }
        
        return s.substr(start, maxLength);  // Return the longest palindromic substring
    }
};
