#include <stdio.h>

int main(void)
{
    double length; // 삼각형의 길이를 저장할 변수 (실수형)
    double height; // 삼각형의 높이를 저장할 변수 (실수형)
    double area; // 삼각형의 넓이를 저장할 변수 (실수형)

    printf("삼각형의 길이 와 높이를 넣으세요: ");
    scanf("%lf %lf", &length, &height);
    area = length * height / 2;
    printf("삼각형의 넓이는 %d입니다. : %.2lf\n", area);
 
    return 0;
}