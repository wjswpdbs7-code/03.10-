#include <stdarg.h>

int main()
{
    char ch1 = 'A'; // 선언과 동시에 대입
    char ch2 = 64;
    char ch3;       // 선언만 하고 대입하지 않음
    printf("ch1 : %c Number: %d\n", ch1, ch2);
    printf("ch2 : %c Number: %d\n", ch2, ch2); // 초기화되지 않은 변수는 쓰레기값이 출력될 수 있음
    scanf("%c", &ch3); // 사용자로부터 문자 입력 받기
    printf("ch3 : %c Number: %d\n", ch3, ch3); // 초기화되지 않은 변수는 쓰레기값이 출력될 수 있음
    return 0;
}
