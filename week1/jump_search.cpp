using namespace std;
#include <bits/stdc++.h>
void jump_search(int *arr, int n, int key)
{
	int k=0, flag = 0, c_comp = 0;
	for (int i=0; i<n; i = pow(2, k))
	{
		k++;
		if (arr[i] == key)
		{
			c_comp++;
			flag = 1;
			break;
		}
		else
			c_comp++;
	}

	if (flag == 0)
	{
		k = 0;
		for (int i=1; i<n; i = (pow(2, k)+1))
		{
			k++;
			if (arr[i] == key)
			{
				flag = 1;
				c_comp++;
				break;
			}
			else
				c_comp++;
		}
	}

	if (flag == 1)
	{
		cout << "Present " << c_comp << endl;
	}
	else
		cout << "Not Present " << c_comp << endl;
}

int main()
{
	int t, arr[30], key, n;
	cin >> t;
	while (t > 0)
	{
		cin >> n;
		for (int i=0; i<n; i++)
			cin >> arr[i];
		cin >> key;
		jump_search(arr, n, key);
		t--;
	}
	return 0;
}