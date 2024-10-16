class Solution {
    public String longestDiverseString(int a, int b, int c) {
        StringBuilder sb = new StringBuilder();
        int ca = 0, cb = 0, cc = 0;
        int tot = a + b + c;
        for (int i = 0; i < tot; i++) {
            if ((a >= b && a >= c && ca != 2) || ((cb == 2 || cc == 2) && a > 0)) {
                sb.append("a");
                a--;
                ca++;
                cb = 0;
                cc = 0;
            } else if ((b >= a && b >= c && cb != 2) || ((ca == 2 || cc == 2) && b > 0)) {
                sb.append("b");
                b--;
                cb++;
                ca = 0;
                cc = 0;
            } else if ((c >= b && c >= a && cc != 2) || ((ca == 2 || cb == 2) && c > 0)) {
                sb.append("c");
                c--;
                cc++;
                ca = 0;
                cb = 0;
            }
        }
        return sb.toString();
    }
}
