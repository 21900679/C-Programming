#include <stdio.h>

int main(void) {
	int dan;    // 출력하려는 구구단의 단 수 
	int i;      // 반복문을 위한 변수

  for(int i = 0; ; i++){
    printf("출력하고 싶은 구구단의 단 수?(2~9) ");
    scanf("%d", &dan);
    if(dan >= 2 && dan <= 9){
      for(int j = 1; j <= 9; j++)
        printf("%d x %d = %d\n", dan, j, dan * j);
      break;
    }
    else
      printf("잘못 입력하였습니다.\n");
  }
  

	
	return 0;
}
