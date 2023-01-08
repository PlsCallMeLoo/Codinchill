#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	    string message;
    getline(cin, message);

    if (count(message.begin(), message.end(),'_'))
    {
    	cout << "snake_case";
    }
    else if(isupper(message.at(0)))
    {
    	cout << "PascalCase";
    }else
    {
    	cout << "camelCase";
    }
}

  


	