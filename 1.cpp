#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string percentage;
   cin >> percentage; cin.ignore();


   int per = stoi(percentage.substr(0, percentage.find('%') + 1));
   int num = per;
   int dem = 100;

   for (int i = 1; i < per; ++i)
   {
   	if(!(num % i) && !(dem % i))
   	{
   		num /= i;
   		dem /= i;
   	}
   }

   cout << num << " : " << dem;
}


	