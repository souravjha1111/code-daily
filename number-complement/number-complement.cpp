class Solution {
public:
int findComplement(int num) {
	int k = int(log2(num));
	int mask = pow(2,k+1) - 1;
	return num^mask;
}};