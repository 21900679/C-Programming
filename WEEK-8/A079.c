#include <stdio.h>

int markBingo(int num, int b[5][5]);
/*파라미터 : 선택된 칸번호(num), 빙고매트릭스(b)
  리턴값 : 이미 마크되어 있었음 0, 마크 안되어 마크함 1 
  수행내용 : 현재의 빙고매트릭스에 선택된 칸번호에 해당되는 칸 검사한 후 마크함
*/

void printBingo(int b[5][5]);
/*파라미터 : 빙고매트릭스(b)
  리턴값 : 없음 
  수행내용 : 현재의 빙고매트릭스 내용 표현
*/

int main(void) {
	int bingo[5][5]={0}; // 빙고용 매트릭스
  int answer;

  while(1){
    printf("Enter a number(1~25) > ");
    scanf("%d", &answer);

    if(answer > 25 || answer < 1){
      printf("EXIT!\n");
      printBingo(bingo);
      break;
    }
    else{
      if(markBingo(answer, bingo) == 0)
        printf("중복!\n");  
      continue;
    } 
    printBingo(bingo);
  }  
}

int markBingo(int num, int b[5][5]){

  int num1, num2;
  
  num1 = num / 5;
  num2 = num % 5 - 1;

  if(b[num1][num2] == 0){
    b[num1][num2] = 1;
    return 1;
  }
  else
    return 0;  
}

void printBingo(int b[5][5]){
  printf("BINGO MATRIX\n");
  printf("---------------------\n");
  for(int i = 0; i < 5; i++){
    printf("| %d | %d | %d | %d | %d |\n", b[i][0], b[i][1], b[i][2], b[i][3], b[i][4]);
  }
  printf("---------------------\n");
}
