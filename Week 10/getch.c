// getch.c
#include <stdio.h>
#include <conio.h>

int main(void) {
	char input_data;
	int count = 1;

	while (1) {
		if (_kbhit()) { // 키보드 키가 누르면
			input_data = _getch();

			// 'q', 'Q', ESC 입력하면 종료
			if (input_data == 'q' || input_data == 'Q' || input_data == 27) {
				printf("\nExiting program.\n");
				break;
			}

			rewind(stdin); // 표준 입력 버퍼에 있는 모든 입력 값을 제거함
			printf("Input %d: %c\n", count++, input_data);
		}
	}
	return 0;
}