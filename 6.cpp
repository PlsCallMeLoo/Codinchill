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
    cin >> s; cin.ignore();

    cout << count(s.begin(), s.end(), 'A') << " "; 
    cout << count(s.begin(), s.end(), 'C')<< " "; 
    cout << count(s.begin(), s.end(), 'G')<< " "; 
    cout << count(s.begin(), s.end(), 'T');

}


  


	