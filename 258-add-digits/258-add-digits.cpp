// class Solution {
// public:
//     int addDigits(int num) {
//         if(num/10==0)
//             return num;
//         int temp =0;
//         while(num/10 !=0){
//             temp += num%10;
//             num/=10;
//         }
//         if(num>0 && num%10==0)
//             return addDigits(num/10);
//         else{
//         if(temp>0)
//             temp+=num;
//         return addDigits(temp);
//     }}
// };

// class Solution {
// public:
//     int addDigits(int num) {
//     int res =0;
//         while(0<num){
//             res+=num%10;
//             num/=10;
//             if(num==0 && res >9){
//                 num = res;
//                 res =0;}
//         }
//         return res;
//     }
// };

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        if (num % 9 == 0) return 9;
        return num % 9;
    }
};