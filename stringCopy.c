/*
 배경 지식 (이 파일을 이해하기 위한 핵심 개념)

 1) 문자와 문자열
     - C에서 문자 하나는 작은따옴표로 표기: 'a'
     - 문자열(문자들의 나열)은 큰따옴표로 표기: "apple"
     - 문자열은 메모리에서 문자들 뒤에 특별한 종료문자 '\0' (널 문자)을 가집니다.
        이 '\0'이 있어야 printf 같은 함수가 문자열의 끝을 알 수 있습니다.

 2) 문자 배열 (char array)와 문자열 저장
     - `char fruit[20]`는 20개의 char를 저장할 수 있는 배열입니다.
     - 문자열 "strawberry"를 저장하면 내부적으로 's','t',...,'y','\0'이 들어갑니다.
     - 배열 크기는 문자열 길이 + 1(널 문자)을 만족해야 안전합니다.

 3) 문자열 복사와 버퍼 오버플로우
     - `strcpy(dest, src)`는 src의 내용을 dest에 복사합니다(널 문자 포함).
     - dest의 크기가 src보다 작으면 메모리 오염(버퍼 오버플로우)이 발생하므로 주의해야 합니다.
     - 안전한 대체로 `strncpy`, `snprintf` 등을 사용합니다.

 4) printf의 %s 포맷
     - `%s`는 문자열(널 종료된 문자 배열)을 출력합니다.
     - `%c`는 단일 문자 출력에 사용합니다.

 이제 코드와 각 줄의 쉬운 설명입니다.
*/

#include <stdio.h>   // printf 사용을 위한 헤더
#include <string.h>  // strcpy 등 문자열 관련 함수를 위한 헤더

int main(void)
{
     // fruit라는 이름의 문자 배열을 20칸 만들고 "strawberry"로 초기화합니다.
     // 배열에는 마지막에 '\0'이 자동으로 들어가 문자열이 완성됩니다.
     char fruit[20] = "strawberry"; // fruit = "strawberry"

     // fruit에 들어있는 문자열을 그대로 출력합니다. -> "딸기 : strawberry"
     printf("딸기 : %s\n", fruit);

     // fruit와 문자열 "jam"을 함께 출력합니다. -> "딸기잼: strawberry jam"
     printf("딸기잼: %s %s\n", fruit, "jam");

     // fruit에 "banana"를 복사합니다.
     // strcpy는 널 문자까지 복사하므로 dest 크기를 항상 확인하세요.
     strcpy(fruit, "banana"); // fruit = "banana"

     // 복사된 결과를 출력합니다. -> "바나나: banana"
     printf("바나나: %s\n", fruit);

     /*
         다음은 fruit를 수동으로 문자 하나씩 넣어 "apple"로 만드는 과정입니다.
         보통은 strcpy(fruit, "apple");로 한 줄에 처리합니다.
     */
     fruit[0] = 'a'; // 첫 번째 칸에 'a' 저장
     fruit[1] = 'p'; // 두 번째 칸에 'p' 저장
     fruit[2] = 'p'; // 세 번째 칸에 'p' 저장
     fruit[3] = 'l'; // 네 번째 칸에 'l' 저장
     fruit[4] = 'e'; // 다섯 번째 칸에 'e' 저장
     fruit[5] = '\0'; // 문자열의 끝을 알리는 널 문자(반드시 필요)

     // 이제 fruit은 "apple"이 되었으므로 출력하면 사과가 나옵니다.
     printf("사과: %s\n", fruit);

     return 0; // 프로그램을 정상 종료합니다.
}