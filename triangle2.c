#include <stdio.h>

/*
 파일: triangle2.c
 역할: 실수형 길이와 높이를 입력받아 삼각형의 넓이를 계산하는 예제
 배경지식: 실수형(double)을 사용하면 소수점 값을 다룰 수 있습니다. printf/scanf의 포맷에 주의해야 합니다.
 초심자 설명: 길이와 높이를 실수로 입력하면 계산된 넓이를 소숫점 둘째 자리까지 보여줍니다.
*/

int main(void)
{
    double length; // 삼각형의 밑변 길이를 저장할 변수(실수)
    double height; // 삼각형의 높이를 저장할 변수(실수)
    double area; // 계산된 넓이 저장(실수)

    printf("삼각형의 길이 와 높이를 넣으세요: "); // 입력 안내
    scanf("%lf %lf", &length, &height); // 실수형 입력은 %lf를 사용
    area = length * height / 2; // 넓이를 실수로 계산
    printf("삼각형의 넓이는 %.2lf입니다.\n", area); // 소수점 둘째 자리까지 출력

    return 0; // 정상 종료
}