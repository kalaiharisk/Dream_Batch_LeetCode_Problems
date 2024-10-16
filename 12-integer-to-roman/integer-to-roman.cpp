class Solution {
public:
    string intToRoman(int num) {
        // Mapping of integer values to their corresponding Roman numeral symbols
        vector<pair<int, string>> romanMap = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result = "";
        
        for (const auto& [value, symbol] : romanMap) {
            // While num is greater than the value, append the symbol and subtract the value
            while (num >= value) {
                result += symbol;
                num -= value;
            }
        }
        
        return result; // Return the final computed Roman numeral
    }
};
