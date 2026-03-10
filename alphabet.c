//입력받은  char가 알파벳인지 아닌지 출력하기
#include<stdio.h>
#include <stdbool.h>

int main(void) 
{
    char ch;
    printf("char 를 입력하세요: ");
    scanf("%c", &ch);// scanf로 입력받을 때는 변수의 주소를 전달해야 합니다(&ch)

    bool isAlphabet; // 
    isAlphabet = (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'));// 이 코드의 명령어를 하나하나 설명하자면 
    printf("%c 는 %s\n", ch, isAlphabet ? "알파벳입니다." : "알파벳이 아닙니다.");
    return 0;
}
