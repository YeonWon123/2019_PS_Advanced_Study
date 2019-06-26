#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
vector<int>::iterator iter;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	// sort(v.begin(), v.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;
		iter = find(v.begin(), v.end(), temp);
		if (iter == v.end())
			cout << 0 << "\n";
		else
			cout << 1 << "\n";
	}

	return 0;
}