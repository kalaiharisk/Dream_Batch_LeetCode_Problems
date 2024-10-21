class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> factorial(n);
        factorial[0]=1;
        for(int i=1;i<n;i++)
        {
            factorial[i]=factorial[i-1]*i;
        }

        vector<int> numbers;
        for(int i=1;i<=n;i++)
        {
            numbers.push_back(i);
        }
        k--;
        string res="";
        for(int i=n-1;i>=0;i--)
        {
            int ind=k/factorial[i];
            res+=to_string(numbers[ind]);
            numbers.erase(numbers.begin()+ind);

            k%=factorial[i];
        }
        return res;
        
    }
};