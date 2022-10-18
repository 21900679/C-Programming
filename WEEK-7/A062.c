#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int lotto[6];  // 컴퓨터가 만들어 낸 로또 번호
  int count = 1;     // 현재 만들어지고 있는 로또 번호의 순서(0, 1, 2, 3, 4, 5)
  int onemore = 1;   // 반복여부 입력 (1:Yes, 2:No)
  int i;         // 반복문을 위한 변수
  int yn = 1;
  
  lotto[0] = rand()%45 + 1;
  srand(time(0));
  while(onemore == 1){
    while(count < 6) {
      lotto[count] = rand()%45 + 1;
      for(i = 0; i < count; i++){
        if(lotto[count] == lotto[i])
          yn = 0;
      }
      if(yn == 1)
          count++;
    }

    printf("생성된 로또 번호는 ");
    for(i = 0; i < 6; i++){
      printf("%d ", lotto[i]);
    }
    printf("입니다.\n");
    printf("더 만드시겠습니까?  (1:Yes, 2:No) >> ");
    scanf("%d", &onemore);
  }
  
  return 0;
}
