#include <stdio.h>

int main(void) {
	int number;     // 입력받은 수
	int count = 0;      // 입력받은 숫자의 개수
	int totalsum = 0;   // 합계
	float average;  // 평균 값

  for(int i = 0; ; i++){
    printf("0초과의 숫자를 입력하세요 ");
    scanf("%d", &number);
    if(number <= 0)
      break;
    count = count + 1;
    totalsum = totalsum + number;
  }

  if(count == 0){
    average = 0.0;
  }
  else 
    average = totalsum / (count * 1.0);
  
  printf("입력한 %d개의 숫자들의 총합계는 %d이고, 평균 값은 %.1f 입니다.", count, totalsum, average);
	
	return 0;
}
