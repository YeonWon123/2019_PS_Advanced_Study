#include <cstdio>
#include <algorithm>
using namespace std;

int A[100000];

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	sort(A, A + N);

	int M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int temp;
		scanf("%d", &temp);
		if (find(A, A + N, temp) == A + N)
			printf("0\n");
		else
			printf("1\n");
	}
}