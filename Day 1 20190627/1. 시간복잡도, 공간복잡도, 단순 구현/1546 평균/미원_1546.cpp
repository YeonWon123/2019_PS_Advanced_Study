#include <cstdio>

float score[1000] = { 0 };

int main(void)
{
	int count;
	scanf("%d", &count);
	
	float max_score = 0;
	for (int i = 0; i < count; i++) {
		scanf("%lf", &score[i]);

		if (score[i] > max_score)
			max_score = score[i];
	}

	float result = 0;
	for (int i = 0; i < count; i++) {
		score[i] = score[i] / max_score * 100;
		result += score[i];
	}

	result /= count;
	printf("%0.2lf\n", result);

	return 0;
}