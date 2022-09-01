#include <stdio.h>

int main(void) {
	int a, b; // 1차 함수의 계수 a, b
	int x;    // x값
  int result; //f(x) = ax + b

  printf("1차 함수의 계수 a와 b를 입력 ");
  scanf("%d %d", &a, &b);
  printf("x값을 입력 ");
  scanf("%d", &x);

  result = a*x + b;
  
  printf("f(x)의 값은 %d입니다.",result);

	
	return 0;
}
