#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	std::vector<int> v;
	string ip;

    getline(cin, ip);

    for(char a : ip)
    {
    	if(isdigit(a))
    	{
    		v.push_back(a - '0');
    	}
    }

    cout << accumulate(v.begin(), v.end(), 0) * v.at(0);

}


	