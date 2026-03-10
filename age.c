//간단한 나이를 출력하는 프로그램
#include <stdio.h> // 표준 입출력 라이브러리를 포함하여 printf와 scanf 함수를 사용할 수 있도록 합니다.

int main(void) {
    int age;
    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    printf("입력한 나이는 %d입니다.\n", age);
    return 0;
}