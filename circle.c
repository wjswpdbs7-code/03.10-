//원의 반지름을 입력받으면 둘레와 길이를 계산하여 출력하는 프로그램
#include <stdio.h> // 표준 입출력 라이브러리를 포함하여 printf와 scanf 함수를 사용할 수 있도록 합니다.
#define PI 3.14159265358979323846 // 원주율을 상수로 정의합니다. 
int main(void) {
    double radius; // 원의 반지름을 저장할 변수 선언
    printf("원의 반지름을 입력하세요: "); // 사용자에게 입력 안내 메시지 출력
    scanf("%lf", &radius); // 사용자로부터 실수 입력을 받아 radius에 저장 (주소 전달 필요)
    
    double circumference = 2 * PI * radius; // 원의 둘레 계산 공식: 2 * π * r
    double area = PI * radius * radius; // 원의 넓이 계산 공식: π * r^2
    
    printf("원의 둘레: %.0lf\n", circumference); // 원의 둘레를 소수점 둘째 자리까지 출력
    printf("원의 넓이: %.0lf\n", area); // 원의 넓이를 소수점 둘째 자리까지 출력
    
    return 0; // 정상 종
}
//만약 값을 정수로만 나오게 하고자 하면  
// printf("원의 둘레: %.0lf\n", circumference); // 원의 둘레를 소수점 없이 정수로 출력
// printf("원의 넓이: %.0lf\n", area); // 원의 넓이를 소수점 없이 정수로 출력 이렇게 하면 됩니다. %.0lf는 소수점 아래 0자리까지 출력하라는 의미입니다. 즉, 소수점 이하를
//버리고 정수 부분만 출력하게 됩니다.