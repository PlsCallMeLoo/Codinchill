#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;

struct enemy
{
	int h = 0;
	int d = 0;
	bool alive = true;
};


int main()
{
					/* PlsCallMeLoo */
    #if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif



    int h;
    int d;
    cin >> h >> d; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    std::vector<enemy> va(n);

    for (int i = 0; i < n; i++) 
    {
        int eh;
        int ed;
        cin >> eh >> ed; cin.ignore();
        va[i].h = eh;
        va[i].d = ed;

    }

    while(h > 0)
    {
	 	for (int i = 0; i < n; ++i)
	    {
	    	va[i].h -= d;

	    	if (va[i].h <= 0)
	    	{
	    		va[i].alive = false;
	    	}

	    	for (int i = 0; i < n; ++i)
	    	{
	    		if(va[i].alive)
	    		{
	    			h -= va[i].d;
	    		}
	    	}
	    }
	    int a = 0;

	    for (int i = 0; i < n; ++i)
	    {
	    	if(!va[i].alive)
	    	{
	    		a++;
	    	}
	    }
	    if(a == n)
	    {
	    	break;
	    }
    }
   

    if(h > 0)
    {
    	cout << "fight";
    }
    else
    {
    	cout << "flee";
    }

}


	