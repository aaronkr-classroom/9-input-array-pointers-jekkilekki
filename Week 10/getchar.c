// getchar.c
#include <stdio.h>
#include <conio.h> // MS 표준 라이브러리

int main(void) {
    char c = getchar(); // 버퍼 사용하고 엔터키 필수
    printf("입력한 문자: %c\n", c);

    // 버퍼에서 남은 문자 있으면...
    printf("버퍼에서 남은 문자: ");
    while ((c = getchar()) != '\n' && c != EOF) {
        putchar(c);  // 문자 한개 씩 출력
    }
    printf("\n");
    return 0;
}