#include <iostream>

using namespace std;
int n, dp[1002];
int main() {
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) {//�����÷ο� �߻��ؼ� ���� ����Ѵ�
		dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
	}

	cout << dp[n];

	return 0;
}