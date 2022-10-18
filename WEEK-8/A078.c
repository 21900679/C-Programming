#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int classSum(int s[5][3], int classnum);
// 파라미터 : 점수배열(s)과 과목번호(0,1,2) 
// 리턴값 : 해당 과목의 총점
int studentSum(int s[5][3], int classnum);
// 파라미터 : 점수배열(s)과 학생번호(0,1,2,3,4) 
// 리턴값 : 해당 학생의 총점
char studentGrade(int s[5][3], int classnum);
// 파라미터 : 점수배열(s)과 학생번호(0,1,2,3,4) 
// 리턴값 : 해당 학생의 등급 ('A','B','C','D','F')

int main(void) {
  
  int jumsu[5][3];            // 5명의 3과목 점수를 저장하고 있는 2차원 배열 
  char classname[3][20]={"국어","영어","수학"};
  int sum_student[5];         // 학생별 총점
  float average_student[5];   // 학생별 평균
  char grade[5];              // 학생별 등급 
  int sum_class[3] = {0};           // 과목별 총점
  float average_class[3];     // 과목별 평균
  srand(time(0));

  printf("5명의 학생 점수가 생성되었습니다.\n");
  for(int i = 0; i < 5; i++){
    jumsu[i][0] = rand()%51 + 50;
    jumsu[i][1] = rand()%51 + 50;
    jumsu[i][2] = rand()%51 + 50;
    printf("%d번 학생 : 국어 %d, 영어 %d, 수학 %d\n", i+1, jumsu[i][0], jumsu[i][1], jumsu[i][2]);
  }
  printf("1) 각 과목별 총점과 평균점수\n");
  for(int i = 0; i < 3; i++){
    sum_class[i] = classSum(jumsu, i);
  }
  for(int i = 0; i < 3; i++){
    average_class[i] = sum_class[i] / 5.0;
  }
  printf("국어 점수의 총점은 %d 평균은 %.1f\n", sum_class[0], average_class[0]);
  printf("영어 점수의 총점은 %d 평균은 %.1f\n", sum_class[1], average_class[1]);
  printf("수학 점수의 총점은 %d 평균은 %.1f\n", sum_class[2], average_class[2]);
  
  printf("2) 각 학생별 총점과 평균점수, 평균에 따른 등급\n");
  for(int i = 0; i < 5; i++){
    sum_student[i] = studentSum(jumsu, i);
  }
  for(int i = 0; i < 5; i++){
    average_student[i] = sum_student[i] / 3.0;
  }
  for(int i = 0; i < 5; i++){
    grade[i] = studentGrade(jumsu, i);
  }
  for(int i = 0; i < 5; i++){
    printf("%d번 학생의 총점은 %d 평균은 %.1f(등급 %c)\n", i+1, sum_student[i], average_student[i], grade[i]);
  }
  
  return 0;
}

int classSum(int s[5][3], int classnum){

  int sum_class = 0;

  for(int i = 0; i < 5; i++){
    sum_class += s[i][classnum];
  }
  return sum_class;
}
int studentSum(int s[5][3], int classnum){

  int total = 0;

  for(int i = 0; i < 3; i++){
    total += s[classnum][i];
  }

  return total;
	
}
char studentGrade(int s[5][3], int classnum){

  char abc;
  int sum_student;
  float average_student;

  sum_student = studentSum(s, classnum);
  average_student = sum_student / 3.0;

  if(average_student >= 90)
    return 'A';
  else if(average_student >= 80)
    return 'B';
  else if(average_student >= 70)
    return 'C';
  else if(average_student >= 60)
    return 'D';
  else 
    return 'F';
  
}
