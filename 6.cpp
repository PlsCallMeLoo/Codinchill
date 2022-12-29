	#include <bits/stdc++.h>
	#define _USE_MATH_DEFINES

	using namespace std;


	int main()
	{
	    #if !0
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		#endif
		
		int l; // The length of the slider
	    cin >> l; cin.ignore();
	    int n; // The number of percentages
	    cin >> n; cin.ignore();
	    for (int i = 0; i < n; i++)
	     {
	        int p; // Percentage
	        cin >> p; cin.ignore();

	        p = p * l * 0.01;

	        for (int i = 0; i < p - 1; ++i)
	         {
	         	cout << '-';
	         } 

	         cout << 'o';

	         ina  a = (p) = 0 : 1;

	         for (int i = 0; i < l - p + a; ++i)
	         {
	         	cout << '-';
	         } 



	         cout << endl;
	    }
	    
	    

	}


		