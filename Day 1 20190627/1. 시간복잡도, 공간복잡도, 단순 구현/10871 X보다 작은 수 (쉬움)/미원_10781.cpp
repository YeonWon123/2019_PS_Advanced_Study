#include <cstdio>

int main(void)
{
	int count, criteria;
	scanf("%d", &count);
	scanf("%d", &criteria);

	for (int i = 0; i < count; i++) {
		int num;
		scanf("%d", &num);
		
		if (num < criteria)
			printf("%d ", num);
	}

	printf("\n");
	return 0;
}