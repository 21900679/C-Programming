#include <stdio.h>

int main(void) {
	int num = 50;
  int size = 25;
  int count = 0;
  int what;
  
	while (1) {
		printf(
			"How about %d? (try more : 1, try less : 2, right : 0) ", num);
		scanf("%d", &what);
    count++;
    if(what == 1) num += size;
    else if (what == 2) num -= size;
    else break;
    size = (size + 1) / 2;    // 크기를 절반으로 반올림. +1을 해주는 경우는 짝수일때는 .5를 버리고 홀수일때는 반올림이 되므로 +1을 해준다.
    if(num < 1) num = 1;
    if(num > 100) num = 100;
  }
	printf("%d tried.", count);
	return 0;
}
