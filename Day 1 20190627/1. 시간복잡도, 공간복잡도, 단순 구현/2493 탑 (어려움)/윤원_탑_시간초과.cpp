#include <cstdio>
using namespace std;

int arr[500000];

int main(void)
{
	int N;
	scanf("%d\n", &N);

	int i, j;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		int sw = 0;
		for (j = i; j >= 0; j--) {
			// ���̰� ���� �ٸ� ž�̹Ƿ�
			if (arr[i] < arr[j]) {
				sw = 1;
				break;
			}
		}
		if (sw == 1) {
			printf("%d ", j+1); // ���������� index�� 1���� �����ϹǷ�
		}
		else
			printf("0 ");
	}
	return 0;
}