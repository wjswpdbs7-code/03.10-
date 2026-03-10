#include <stdio.h>
#include <limits.h>

/*
 파일: limit.c
 역할: 롤(타입)별 최소/최대값과 char 비트수를 출력하는 예제
 배경지식: <limits.h>에는 정수형 타입의 최소/최대 값을 나타내는 매크로가 정의되어 있습니다.
 초심자 설명: 각 정수형 타입의 범위를 확인하여 자료형의 한계를 이해할 수 있습니다.
*/

int main(void)
{
    printf("char_bit : %d\n", CHAR_BIT); // char 타입이 차지하는 비트 수
    printf("char_min : %d\n", CHAR_MIN); // char 타입의 최소값
    printf("char_max : %d\n", CHAR_MAX); // char 타입의 최대값
    printf("int_min : %d \t int_max : %d\n", INT_MIN, INT_MAX); // int 범위 출력
    printf("long_min : %ld \t long_max : %ld\n", LONG_MIN, LONG_MAX); // long 범위 출력
    printf("long_long_min : %lld \t long_long_max : %lld\n", LLONG_MIN, LLONG_MAX); // long long 범위 출력
    printf("END_HELLO\n"); // 추가 출력(샘플 종료 표시)
    return 0; // 정상 종료
}