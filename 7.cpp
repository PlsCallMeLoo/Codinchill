#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   	#if !01
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	std::vector<string> v;
	string s;
    getline(cin, s);
    int d = (count(s.begin(), s.end(), ' ')) + 1;

    for (int i = 0; i < d ; ++i)
    {
    	string a = s.substr(0, s.find(' '));
    	v.push_back(a);
    	s.erase(0, s.find(' ') + 1);
    }

    for (int i = 0; i < v.size(); ++i)
    {
        if(i != v.size())  cout << " ";
    	cout << v.at(v.size() - 1 - i) ;
    }
}


