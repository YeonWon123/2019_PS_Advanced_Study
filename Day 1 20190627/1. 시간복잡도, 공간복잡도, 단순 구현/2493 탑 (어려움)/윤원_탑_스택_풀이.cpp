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
		// ������ �ִٸ� ���� �Է� ������ ���� ���ÿ� �ִ� ������ ������ ��.
		while (top > 0) { // top�� 0���� ũ�� ���ÿ� ���� ����.
			if (arr[top] >= input) { // ���� top�� ����Ű�� ���� ũ�� �ε��� ���� �������
				printf("%d ", index[top]);
				break;
			}
			else { // ũ�� �ʴٸ� pop ����
				top--;
			}
		}
		// ù ��° ������ ���� ���� �����Ƿ� push���� ���� ������ ���� �� 0�� ���
		if (top <= 0) {
			printf("0 ");
		}
		// ���ÿ� ���� �����Ƿ� ���ÿ� �Է�
		top++;
		index[top] = i + 1;
		arr[top] = input;
	}
	return 0;
}