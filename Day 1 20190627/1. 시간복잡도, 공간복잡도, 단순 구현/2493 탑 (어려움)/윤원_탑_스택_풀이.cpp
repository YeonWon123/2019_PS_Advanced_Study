#include <cstdio>
using namespace std;

int arr[500000] = { 0, };
int index[500000] = { 0, };

int main()
{
	int top = 0;
	int input;
	int N;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		// 스택이 있다면 값을 입력 받은후 기존 스택에 있는 값보다 작은지 비교.
		while (top > 0) { // top가 0보다 크면 스택에 값이 존재.
			if (arr[top] >= input) { // 기존 top이 가리키는 값이 크면 인덱스 값을 출력해줌
				printf("%d ", index[top]);
				break;
			}
			else { // 크지 않다면 pop 해줌
				top--;
			}
		}
		// 첫 번째 값보다 이전 값은 없으므로 push보다 먼저 스택이 없을 때 0을 출력
		if (top <= 0) {
			printf("0 ");
		}
		// 스택에 값이 없으므로 스택에 입력
		top++;
		index[top] = i + 1;
		arr[top] = input;
	}
	return 0;
}