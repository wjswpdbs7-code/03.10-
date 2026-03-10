#include <stdio.h>

int main(void)
{
  int a, b; //; 붙인이유는 C에서 각 명령문(statement)의 끝을 나타내기 위해서입니다.
  a = 5;
  b = ++a; // a의 값을 1 증가시키고 그 결과를 b에 저장 이로인해 a는 6이 되고 b도 6이 됩니다. a가 6인 이유는 
  printf("a : %d, \t b : %d\n", a, b); // a는 6, b도 6이 출력됨
  
  a = 5; //여기서 a를 다시 5로 초기화 이유는  
  b = a++; // a의 현재 값을 b에 저장한 후 a의 값을 1 증가시킴
  printf("a : %d, \t b : %d\n", a, b); // a는 6이지만 b는 5가 출력

  printf("a : %d, \t b : %d\n", a, a++); // a는 6, b는 5가 출력 
  printf("a : %d, \t b : %d\n", a, ++a); // a는 7, b도 7이 출력

  return 0; // 정상 종료 

  

}