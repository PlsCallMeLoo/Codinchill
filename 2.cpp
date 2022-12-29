#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	string s;
    getline(cin, s);

    char buffer = '-';

    int aa = 0;
    for(char a : s)
    {
    	if(tolower(a) == buffer)
    	{
    		aa++;
    	}

    	buffer = tolower(a);
    }

    cout << aa;

}


	