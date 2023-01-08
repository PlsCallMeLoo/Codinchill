#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
   #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int height;
    cin >> height; cin.ignore();
    int width;
    cin >> width; cin.ignore();
    string material;
    cin >> material; cin.ignore();

    for (int i = 0; i < height; ++i)
    {
    	for (int x = 0; x < width; x++)
    	{
    		cout << material;
    	}cout << endl;
    }
}

  


	