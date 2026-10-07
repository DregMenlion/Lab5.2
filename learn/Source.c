#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");

	int months;
	
	printf("Введите возраст ребёнка в месяцах: ");
	scanf("%d", &months);

	switch (months / 12) {
	case 0:
		switch (months) {
		case 0:
		case 1:
			printf("Новорождённый");
			break;
		default:
			printf("Младенец");
		}
		break;

	case 1:
	case 2:
		printf("Раннее детство");
		break;
	case 3:
	case 4:
	case 5:
	case 6:
		printf("Дошкольник");
		break;
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
		printf("Школьник");
		break;
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
		printf("Подросток");
		break;

	default:
		printf("Вы ввели не то");
	}

	return 0;
}