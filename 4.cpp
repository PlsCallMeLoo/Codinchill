#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a;
    cin >> a; cin.ignore();
    int b;
    cin >> b; cin.ignore();
    int c;
    cin >> c; cin.ignore();
    int d;
    cin >> d; cin.ignore();

	for (int i = 0; i < d; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << a;
			if(j + 1 < c)
				{
					cout << " ";
				}
			a += b;
		}
		cout << endl;
	}
	
}
    



	