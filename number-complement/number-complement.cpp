class Solution {
public:
int findComplement(int num) {
	int num_bits = int(log2(num));
	int comple = pow(2,num_bits+1) - 1;
	return num^comple;
}};