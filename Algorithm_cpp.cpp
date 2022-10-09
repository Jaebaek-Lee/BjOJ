#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, m;
	string a, b;
	int count = 1;
	int flag = 1;
	cin >> n;
	cin >> a;
	cin >> m;
	cin >> b;

	char temp = a[n - 1];
	string c;
	c.push_back(temp);
	for (int i = 0; i < n - 1; ++i)
	{
		c.push_back(a[i]);
	}

	for (int i = 0; i < m; ++i)
	{
		while (true)
		{
			if (c[count % n] == b[i])
			{
				++count;
				break;
			}
			else ++count;
			if (count > 10001)
			{
				flag = 0;
				break;
			}
		}
	}
	if (flag == 0)
		cout << -1;
	else
		cout << count - 1;
}