#include <iostream>
#include <set>
using namespace std;

int main() {
	set <int> s, sE;
	int n, m;
	cin >> n;
	for (int x, i = 0; i < n && cin >> x; i++)
	{
		s.insert(x);
	}
	cin >> m;
	for (int x, i = 0; i < m && cin >> x; i++)
	{
		if (!s.insert(x).second) sE.insert(x);
	}
	for (auto now : sE) cout << now << " ";
	return 0;
}

