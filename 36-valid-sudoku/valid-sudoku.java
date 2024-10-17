// class Solution {
//     public boolean isValidSudoku(char[][] board) {
//         int[] r=new int[9];
//         int[] c=new int[9];
//         int[] bi=new int[9];
//         for(int i=0;i<9;i++)
//         {
//             for(int j=0;j<9;j++)
//             {
//                 char cv=board[i][j];
//                 int bii=((i / 3)*3 + (j / 3));
//                 if(cv!='.')
//                 {
//                     int num=cv- '1';
//                     if(((r[i] &(1<<num))!=0 ||((c[i] &(1<<num)))!=0 ||((bi[bii]&(1<<num))!=0)))
//                     {
//                         return false;
//                     }

//                     r[i] |= (1<<num);
//                     c[i] |= (1<<num);
//                     bi[bii] |= (1<<num);
//                 }
//             }
//         }
//         return true;
        
//     }
// }
class Solution {
    public boolean isValidSudoku(char[][] board) {
        // Arrays to track seen digits in rows, columns, and boxes
        int[] r = new int[9]; // Row tracking
        int[] c = new int[9]; // Column tracking
        int[] bi = new int[9]; // Box tracking

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char cv = board[i][j];
                if (cv != '.') {
                    int num = cv - '1'; // Convert char to integer (0-8)

                    // Calculate the box index
                    int bii = (i / 3) * 3 + (j / 3);

                    // Check for duplicates
                    if ((r[i] & (1 << num)) != 0 || (c[j] & (1 << num)) != 0 || (bi[bii] & (1 << num)) != 0) {
                        return false; // Found a duplicate
                    }

                    // Mark the number as seen
                    r[i] |= (1 << num);
                    c[j] |= (1 << num);
                    bi[bii] |= (1 << num);
                }
            }
        }
        return true; // Valid Sudoku if no duplicates found
    }
}
