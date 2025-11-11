// scanf.c
#include <stdio.h>

int main(void) {
	char char_data;
	int int_data, oct_data, hex_data;
	float float_data;
	char str_data[20];

	printf("Enter the following data:\n");
	printf("%%c, %%d, %%o, %%x, %%f, %%s\n"); // %c 

	scanf_s("%c", &char_data, 1); // & = 메모리 주소
	printf("char %%c: %c\n", char_data);

	scanf_s("%d %o %x", &int_data, &oct_data, & hex_data);
	printf("int %%d: %d, oct %%o: %o, hex %%x: %x\n",
		int_data, oct_data, hex_data);

	scanf_s("%f", &float_data);
	printf("float %%f: %f\n", float_data);

	scanf_s("%s", &str_data, sizeof(str_data)); // 오류?
	printf("str %%s: %s\n", str_data);

	return 0;
}