#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int char_count;
    cin >> char_count; cin.ignore();
    for (int i = 0; i < char_count; i++) 
    {
        int char_code;
        cin >> char_code; cin.ignore();
        cout << (char)char_code;
    }
}


	