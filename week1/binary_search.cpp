using namespace std;
#include <iostream>

void binary_search(int *arr, int l, int r, int key, int c_comp)
{
	if (l > r)
		return;
	
	
	int flag = 0;
	while (l <= r)
	{
		int mid = l+(r-l)/2;
		if (arr[mid] == key)
		{
			flag = 1;
			c_comp++;
			break;
		}
		else if (arr[mid] < key)
		{
			c_comp++;
			l = mid+1;
		}
		else 
		{
			c_comp++;
			r = mid-1;
		}
	}

	if (flag == 1)
		cout << "Present" << c_comp << endl;
	else 
		cout << "Not Present" << c_comp << endl;
}

int main()
{
	int t, arr[30], n, key, c_comp=0;
	cin >> t;
	while (t > 0)
	{
		cin >> n;
		for (int i=0; i<n; i++)
		{
			cin >> arr[i];
		}
		cin >> key;
		binary_search(arr, 0, n-1, key, c_comp);
		t--;
	}
}