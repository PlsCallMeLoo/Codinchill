#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

   int n;
    cin >> n; cin.ignore();


	for (int i = n, x = 0; x < 10; i += n, x++)
	{
		if(x)
		{
			cout << " ";
		}
		cout << i;
	}
}


	