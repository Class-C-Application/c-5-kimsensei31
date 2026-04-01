#include <stdio.h>

#define ROWSIZE 4
#define COLSIZE 2

int main(void) {
    // 3차원 배열 초기화: [강좌][학생][중간/기말]
    int score[][ROWSIZE][COLSIZE] = {
        { {95, 85}, {85, 83}, {92, 75}, {98, 88} }, // 강좌 1 점수
        { {88, 77}, {72, 95}, {88, 92}, {93, 83} }  // 강좌 2 점수
    };

    for (int i = 0; i < 2; i++) { // i: 강좌 구분
        if (i == 0)
            printf("[강좌 1]\n");
        else
            printf("[강좌 2]\n");

        printf("%11s %7s\n", "중간", "기말");

        for (int j = 0; j < ROWSIZE; j++) { // j: 학생 구분
            printf("%10s %2d", "학생", j + 1);
            
            for (int k = 0; k < COLSIZE; k++) { // k: 점수 구분 (중간/기말)
                printf("%6d", score[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}