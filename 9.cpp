#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	string word;
    getline(cin, word);

    for (char a : word)
    {

    	
    	int z = (int)a + count(word.begin(), word.end(), a);

    	if(z > 122) z -= 25;

    	cout << (char)z;

    }
}


	