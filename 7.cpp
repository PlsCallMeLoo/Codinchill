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

    string t;
    getline(cin, t);
    string match;
    getline(cin, match);

    cout << t.substr(0, t.find(match)) << endl << match << 
    endl << t.substr(t.find(match) + match.size(), t.size());

}


	