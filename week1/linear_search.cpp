using namespace std;
#include <iostream>

void linear_search(int *arr, int n, int num)
{
	int c_comp = 0, flag = 0;
	for (int i=0; i<n; i++)
	{
		if (arr[i] == num)
		{
			c_comp++;
			flag = 1;
			break;
		}
		else
		{
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
	int t, n, arr[30], num;
	cin >> t;
	while (t > 0)
	{
		cin >> n;
		for (int i=0; i<n; i++)
			cin >> arr[i];
		cin >> num;
		linear_search(arr, n, num);
		t--;
	}
	return 0;
}