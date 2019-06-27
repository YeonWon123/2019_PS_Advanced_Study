#include <cstdio>
#include <cstdlib>
#include <cstring>

char original[3];
char calculate[3];
int count = 0;

int main(void)
{
	int num;
	scanf("%d", &num);

	if (num < 10) {
		original[0] = '0';
		original[1] = num + '0';
		original[2] = '\0';
	}
	else {
		original[0] = num / 10 + '0';
		original[1] = num % 10 + '0';
		original[2] = '\0';
	}

	strcpy(calculate, original);

	while (1) {
		int result = (calculate[0] - '0') + (calculate[1] - '0');

		calculate[0] = calculate[1];
		calculate[1] = (result % 10) + '0';
		count++;

		if (strcmp(calculate, original) == 0)
			break;
	}

	printf("%d\n", count);
	exit(0);
}