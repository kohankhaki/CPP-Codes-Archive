#include <iostream>

using namespace std;

int n, x;
string s;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s[1] == '-')
			x--;
		else
			x++;
	}
	cout << x << endl;
	return 0;
}