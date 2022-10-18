#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int bingo[5][5]={0}; // 빙고용 매트릭스
	int num1, num2; // 입력받는 행, 열 번호 

  srand(time(0));
  for(int i = 0; i < 10; i++){
    num1 = rand() % 5;
    num2 = rand() % 5;
    if(bingo[num1][num2] == 0)
      bingo[num1][num2] = 1;
    else
      i--;
  }

  printf("10개의 칸이 임의로 선택된 결과는 다음과 같습니다.\n");
  for(int i = 0; i < 5; i++){
    printf("---------------------\n");
    printf("| %d | %d | %d | %d | %d |\n", bingo[i][0], bingo[i][1], bingo[i][2], bingo[i][3], bingo[i][4]);
  }
  printf("---------------------\n");
  
	return 0;
}
