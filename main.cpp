#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ 0 };
	for (auto i = 0; i <= n; ++i) {
		for (auto j = i; j <= n; ++j) {
			ans += j;
			ans += i;
		}
	}

	cout << ans;

	return 0;
}