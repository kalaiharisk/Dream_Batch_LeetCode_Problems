class Solution {
    public List<String> fullJustify(String[] words, int maxWidth) {
        List<String> result = new ArrayList<>();
        int n = words.length;
        int i = 0;
        
        while (i < n) {
            // Step 1: Find how many words fit in the current line
            int lineLen = 0;
            int start = i;
            
            // Try to fit as many words as possible
            while (i < n && lineLen + words[i].length() + (i - start) <= maxWidth) {
                lineLen += words[i].length();
                i++;
            }
            
            // Step 2: Create the current line
            int numWords = i - start;
            int totalSpaces = maxWidth - lineLen;
            StringBuilder line = new StringBuilder();
            
            // Case 1: Last line or only one word in the line (left-justified)
            if (i == n || numWords == 1) {
                for (int j = start; j < i; ++j) {
                    line.append(words[j]);
                    if (j != i - 1) {
                        line.append(' ');
                    }
                }
                // Add remaining spaces to the right to fill the line
                int remainingSpaces = maxWidth - line.length();
                for (int k = 0; k < remainingSpaces; ++k) {
                    line.append(' ');
                }
            } 
            // Case 2: Fully justify the line
            else {
                int spaceBetweenWords = totalSpaces / (numWords - 1);
                int extraSpaces = totalSpaces % (numWords - 1);
                
                for (int j = start; j < i; ++j) {
                    line.append(words[j]);
                    if (j != i - 1) {
                        // Add evenly distributed spaces between words
                        for (int s = 0; s < spaceBetweenWords; ++s) {
                            line.append(' ');
                        }
                        // Add extra space if necessary (from left to right)
                        if (extraSpaces > 0) {
                            line.append(' ');
                            extraSpaces--;
                        }
                    }
                }
            }
            
            // Add the current line to the result
            result.add(line.toString());
        }
        
        return result;
    }
}
