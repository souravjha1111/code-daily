class Solution {
public:
  int singleNumber(vector<int>& nums) {
    int flip=0;
    for (int val : nums)
      flip ^= val;
    return flip;
  }};
