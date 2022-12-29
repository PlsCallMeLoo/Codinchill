#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int width;
    cin >> width; cin.ignore();
    int height;
    cin >> height; cin.ignore();

	for (int i = 0; i < width; ++i)
	{
		cout << "*";
	}

	cout << endl; 

	for (int i = 0; i < height - 2 ; ++i)
	{
		cout << "*";

		for (int j = 0; j < width - 2 ; ++j)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	for (int i = 0; i < width; ++i)
	{
		cout << "*";
	}


}


	