#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

#include <cstring>

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
       string s;
    getline(cin, s);

    std::vector<char> v;

    for(int i = 0;i < s.size();i++ )
    {
        s[i] = tolower(s[i]);
    }



    for(int i = 0;i < s.size();i++ )
    {
        if(!(count(v.begin(), v.end(), s[i])))
        {
            cout << s[i] <<  " " << count(s.begin(), s.end(), s[i]) << endl;
            v.push_back(s[i]);
        }
    }


}


	