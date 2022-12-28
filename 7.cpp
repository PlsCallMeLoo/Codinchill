#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	 string n;
    getline(cin, n);

    int x = 0;

    for (int i = 0; i < n.size() - 1;i++)
    {
    		if(n[i] != n[i + 1])
    		{
    			x++;
    		}
    }

    cout << x;
}


	