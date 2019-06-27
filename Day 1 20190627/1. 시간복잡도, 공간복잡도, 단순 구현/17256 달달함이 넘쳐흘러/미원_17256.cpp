#include <cstdio>

int main(void)
{
	int a[3], b[3], c[3];

	scanf("%d %d %d\n", &a[0], &a[1], &a[2]);
	scanf("%d %d %d", &c[0], &c[1], &c[2]);

	b[0] = c[0] - a[2];
	b[1] = c[1] / a[1];
	b[2] = c[2] - a[0];

	printf("%d %d %d\n", b[0], b[1], b[2]);
	return 0;
}