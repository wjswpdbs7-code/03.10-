#include <stdio.h>

int main()
{
    int celsius; // 섭씨 온도를 저장할 변수 선언
    printf("섭씨 온도를 입력하세요: "); // 사용자에게 입력 안내 메시지 출력
    scanf("%d", &celsius); // 사용자로부터 정수 입력을 받아 c
    double fahr;
    fahr = 9.0 / 5.0 * (double)celsius + 32.0; // 섭씨를 화씨로 변환하는 공식
    printf("C(celsius) 온도: %.2d\n", celsius); // 섭씨 온도를 소수점 둘째 자리까지 출력
    printf("F(fhar) 온도: %.2f\n", fahr); // 화씨 온도를 소수점 둘째 자리까지 출력
    return 0; // 정상 종료
}

//이 코드의 기능은 사용자로부터 섭씨 온도를 입력받아 
//화씨 온도로 변환하여 출력하는 것입니다. 
//섭씨 온도는 정수형으로 입력받고, 
//화씨 온도는 실수형으로 계산하여 소수점 둘째 자리까지 출력합니다.