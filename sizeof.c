#include <stdio.h>
#include <stdint.h>

// sizeof 연산자 예제 - 각 데이터 타입의 크기를 바이트 단위로 출력하는 프로그램입니다. 
// 쉽게 설명하자면, sizeof는 C에서 특정 데이터 타입이나 변수의 크기를 알려주는 연산자입니다. 
// 예를 들어, char는 보통 1바이트, int는 4바이트 등으로 시스템에 따라 다르지만 일반적으로 정해진 크기를 가집니다. 
// 이 프로그램은 다양한 데이터 타입과 변수의 크기를 출력하여, C에서 각 타입이 얼마나 많은 메모리를 차지하는지 보여줍니다.

int main(void)
{
    int num; // int 타입의 변수 선언
    printf("sizeof(char) : %1d\n", sizeof(char)); // char 타입의 크기 출력
    printf("sizeof(short) : %1d\n", sizeof(short)); // short 타입의 크기 출력
    printf("sizeof(int) : %1d\n", sizeof(int)); // int 타입의 크기 출력
    printf("sizeof(long) : %1d\n", sizeof(long)); // long 타입의 크기 출력
    printf("sizeof(float) : %1d\n", sizeof(float)); // float 타입의 크기 출력
    printf("sizeof(double) : %1d\n", sizeof(double)); // double 타입의 크기 출력
    printf("sizeof(num) : %1d\n", sizeof(num)); // number 타입의 크기 출력
    printf("sizeof(3.141592) : %1d\n", sizeof(3.141592)); // 3.141592 리터럴의 크기 출력
    printf("sizeof(uint32_t) : %1d\n", sizeof(uint32_t)); // uint32_t 타입의 크기 출력
    return 0; // 정상 종료  
}