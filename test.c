#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int i, j;

    // 外层循环遍历矩阵的行
    for (i = 0; i < 3; i++) {
        // 内层循环遍历矩阵的列
        for (j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        // 每打印完一行后换行
        printf("\n");
    }

    return 0;
}