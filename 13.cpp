#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 

	int l;
    cin >> l; cin.ignore();
    string b;
    getline(cin, b);

    for (int i = 0; i < l - 1; ++i)
    {
    	if (b[i + 1] == ' ')
    	{
    		cout << 'j';
    		i++;
    	}else
    	{
    		cout << 'w';
    	}
    }



}


	