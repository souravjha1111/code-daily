class Solution {
public:
    int bitwiseComplement(int N) 
    {
        return 
            N == 0 ? 1 : N ^ (int)(pow(2, floor(log2(N)) + 1) - 1);
    }
};
