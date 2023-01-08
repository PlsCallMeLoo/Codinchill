#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
   cin >> n; cin.ignore();

   int a = n - 1;

   int jumps = 0;
   int i = 4;
  while(a != 0)
  {
		while(a > 0)
   	{
   		a -= i;jumps++;
   	}
   	if(a < 0)
   	{
   		a+=i;i--;
   	}
   	else
   	{
   		break;
   	}
   	
  }
  cout << jumps;
   	
   
}


	