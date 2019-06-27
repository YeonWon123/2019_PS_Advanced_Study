#include <cstdio>

int main(void)
{
	int num;
	scanf("%d", &num);

	int result = 0;
	for (int i = 1; i <= num; i++)
		result += i;

	printf("%d\n", result);
	return 0;
}