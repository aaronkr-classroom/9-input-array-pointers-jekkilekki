// void_ptr.c
#include <stdio.h>

int GetData(void* p_data, char type) {
	int result = 0;
	// type 변수에 저장된 값을 기준으로 형 변환을 다르게 함
	if (type == 1) result = *(char*)p_data; // 0x78(1바이트) 저장
	else if (type == 2) result = *(short*)p_data; // 0x5678(2바이트)
	else if (type == 4) result = *(int*)p_data; // 0x12345678(4바이트)
	return result;
}

int main(void) {
	int data = 0x87654321;
	// data 변수에서 2바이트 크기만 출력함
	printf("0x%X\n", GetData(&data, 2)); // 0x5678
	printf("0x%X\n", GetData(&data, 1)); // 0x78
	printf("0x%X\n", GetData(&data, 4)); // 0x12345678
	return 0;
}