#include<stdio.h>
#include <stdint.h>
#define BOLD 0X01             //0b00000001
#define ITALIC (0X01 << 1)    //0b00000010
#define SHADOW (0X01 << 2)    //0b00000100
#define UNDERLINE (0X01 << 3) //0b00001000

int main(void)
{
    //unsigned char attr; // 8비트(1바이트) 크기의 부호 없는 문자형 변수 선언
    uint8_t attr;
    attr = attr ^ attr;
    attr = attr | BOLD;
    printf("attr: 0x%02x\n", attr);
    attr = attr | (ITALIC +SHADOW);
    printf("attr: 0x%02x\n", attr);
    attr = attr & (~BOLD);
    printf("attr: 0x%02x\n", attr);
    if(attr & BOLD)
    {
        printf("BOLD가 설정되어 있습니다.\n");
    }
    else
    {
        printf("BOLD가 설정되어 있지 않습니다.\n");
    }
    if ((attr & ITALIC) >>1)
    {
        printf("ITALIC이 설정되어 있습니다.\n");
    }
    else
    {
        printf("ITALIC이 설정되어 있지 않습니다.\n");
    }
    if ((attr & SHADOW) >>2)
    {
        printf("SHADOW가 설정되어 있습니다.\n");
    }
    else
    {
        printf("SHADOW가 설정되어 있지 않습니다.\n");
    }
    if ((attr & UNDERLINE) >>3)
    {
        printf("UNDERLINE이 설정되어 있습니다.\n");
    }
    else
    {
        printf("UNDERLINE이 설정되어 있지 않습니다.\n");
    }
    return 0;
  
}