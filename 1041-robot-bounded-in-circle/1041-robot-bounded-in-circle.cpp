// class Solution {
// public:
//     bool isRobotBounded(string instructions) {
//         char dir = 'n';
//         int i=0, j=0;
        
//         int count = 0;
//         while(instructions[count]!='G'){
//             char c = instructions[count];
//             if(c=='L'){
//                 if(dir=='n')
//                     dir = 'w';
//                 else if(dir=='s')
//                     dir = 'e';
//                 else if(dir=='e')
//                     dir = 'n';
//                 else
//                     dir = 's';
//                 }
//             else{
//                 if(dir=='n')
//                     dir = 'e';
//                 else if(dir=='s')
//                     dir = 'e';
//                 else if(dir=='e')
//                     dir = 's';
//                 else
//                     dir = 'n';
//                 }
//             count++;

//         }
        
//         for(int count; count<instructions.length(); count++){
//             char c = instructions[count];
//             if(c=='G'){
//                 if(dir=='n')
//                     j++;
//                 else if(dir=='s')
//                     j--;
//                 else if(dir=='e')
//                     i++;
//                 else
//                     i--;
//             }
//             else{
//                 if(c=='L'){
//                 if(dir=='n')
//                     dir = 'w';
//                 else if(dir=='s')
//                     dir = 'e';
//                 else if(dir=='e')
//                     dir = 'n';
//                 else
//                     dir = 's';
//                 }
//             else{
//                 if(dir=='n')
//                     dir = 'e';
//                 else if(dir=='s')
//                     dir = 'e';
//                 else if(dir=='e')
//                     dir = 's';
//                 else
//                     dir = 'n';
//                 }
//             }
//             if(i==0 && j==0)
//                 return true;
//         }
//         return false;
//     }
// };



class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<vector<int>> dir = {{0,1}, {-1, 0}, {0, -1}, {1,0}};
        int i = 0;
        int x = 0;
        int y = 0;
       
        for(int s = 0; s < instructions.size(); s++){
            if(instructions.at(s) == 'L'){
                i = (i + 1) % 4;
            }
            else if(instructions.at(s) == 'R'){
                i = (i + 3) % 4;
            }
            else{
                x = x + dir[i][0];
                y = y + dir[i][1];
            }
        }
        return x == 0 && y == 0 || i != 0;
    }
};


