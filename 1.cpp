#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string n_1;
    string n_2;
    cin >> n_1 >> n_2; cin.ignore();

    string ans = "";

    for (int i = 0; i < n_1.size(); ++i)
    {
    	if(n_1[i] == '1' or n_2[i] == '1')
    	{
    		ans += '1';
    	}
    	else
    	{
    		ans += '0';
    	}
    }

    cout << ans;
}


	