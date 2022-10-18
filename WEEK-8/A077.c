#include <stdio.h>

int maxOfTen(int number[10]);
int minOfTen(int number[10]); 

int main(void) {
	int number[10] = {0};
	int i;
	int max, min;

	for(i = 0; i < 10; i++){
    printf("%d번째 숫자를 입력하시오. ", i+1);
    scanf("%d", &number[i]);
  }

  max = maxOfTen(number);
  min = minOfTen(number);

  printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", max, min);
  return 0;
}

int maxOfTen(int number[10]){
  int max;
  
  max = number[0];
  for(int i = 1; i < 10; i++){
    if(max < number[i])
      max = number[i];
  }
  
  return max;
}
int minOfTen(int number[10]){
  int min;
  
  min = number[0];
  for(int i = 1; i < 10; i++){
    if(min > number[i])
      min = number[i];
  }
  
  return min;
}
