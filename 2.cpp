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

   std::vector<int> v;

   for(char &a : s)
   {
   	const char aa = a;
   	v.push_back(atoi(&aa));
   }

   cout << *min_element(v.begin(), v.end()) << endl;
   cout << *max_element(v.begin(), v.end()) ;
}


	
