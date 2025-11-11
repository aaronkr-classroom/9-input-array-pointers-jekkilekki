// getMyStr.c
#include <stdio.h>

#define MAX_CH 25

int getMyStr(char buffer[], int limit) {
    int i = 0;
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (i < limit - 1) {          // 마지막에는 널문자('\0')가 들어가야 함
            buffer[i++] = (char)ch;   // 문자를 저장
        }
        else {
            // 입력 초과 시 나머지 입력 버퍼 비움
            while (getchar() != '\n' && getchar() != EOF);
            buffer[i] = '\0';
            return 0; // out of range
        }
    }

    buffer[i] = '\0'; // 문자열 종료
    return 1; // 정상 입력
}

int main(void) {
	char input_str[MAX_CH];
	int state; // 상태: 사용자에게 최대 MAX_CH까지만 입력 받겠다고 제한함
	
	printf("Enter text (max %d chars): ", MAX_CH - 1);
	state = getMyStr(input_str, MAX_CH);

	if (state) printf("input: %s\n", input_str);
	else printf("input: %s -> out of range\n", input_str);

	return 0;
}