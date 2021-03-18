#include <stdio.h>
#define ROW   3
#define COL   3
typedef int Array[ROW][COL]; 
int main(void)
{
    Array given_Data = { { 9, 6, 1 }, { 144, 70, 50 }, {10, 12, 78} };
    Array *pointer_of_2DArray = NULL; 
    int row =0, col =0; 
    pointer_of_2DArray = &given_Data;
    for (row = 0; row < ROW; ++row)     {
        for (col = 0; col < COL; ++col)
        {            printf("array at[%d][%d] = %d\n",row,col, (*pointer_of_2DArray)[row][col]); }    }
    return 0;
}
// sourav jha 01014802819