#include <stdbool.h> // bool, true, false를 사용하기 위한 헤더
#include <stdio.h>  // printf, scanf 사용을 위한 표준 입출력 헤더

/*
 파일: compare.c
 역할: 사용자로부터 두 정수를 입력받아 첫 번째가 두 번째보다 큰지 판별하여 출력하는 프로그램
 배경지식: 비교 연산자(>, <, == 등)와 조건문(if-else), scanf/printf의 기본 사용을 배웁니다.
 초심자 설명: 숫자 두 개를 입력하면 "a가 더 크다." 또는 "a가 더 작다."를 알려주는 예제입니다.
*/

int main(void)
{
    int a, b; // 두 정수를 저장할 변수 선언

    bool greater = false; // a가 b보다 큰지 여부를 저장할 불리언 변수(초기값 false)

    printf("두 정수를 입력하세요: "); // 사용자에게 입력 안내 메시지 출력
    scanf("%d %d", &a, &b); // 사용자로부터 정수 두 개를 읽어 a와 b에 저장

    greater = a > b; // a가 b보다 큰지를 평가한 결과(true/false)를 greater에 저장

    printf("greater의 값은 %d이다\n", greater); // 내부값(0 또는 1)을 출력하여 확인

    if (greater == true) // greater가 true이면(또는 0이 아니면) 아래 블록 실행
    {
        printf("a가 더 크다.\n"); // a가 더 큰 경우 메시지 출력
    }
    else
    {
        printf("a가 더 작다.\n"); // 그렇지 않은 경우(작거나 같은 경우) 출력
    }

    return 0; // 정상 종료
}