#include <stdio.h>
#include <math.h>

int main() {
	float x1, x2;   // x좌표 값
	float y1, y2;   // y좌표 값
	float distance;  // 거리 값

  printf("첫번째 좌표의 x값? ");
  scanf("%f", &x1);  
  printf("첫번째 좌표의 y값? ");
  scanf("%f", &y1);  
  printf("두번째 좌표의 x값? ");
  scanf("%f", &x2);  
  printf("두번째 좌표의 y값? ");
  scanf("%f", &y2);  

  distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

  printf("두 좌표 사이의 거리는 %.1f", distance);

	return 0;
}
