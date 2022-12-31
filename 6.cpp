#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;



int findNthOccur(string str,                  char ch, int N) 
{     
	int occur = 0;      
 // Loop to find the Nth     // occurrence of the character    
  for (size_t i = 0; i < str.length(); i++) 
  {    
      if (str[i] == ch)
       {             occur += 1;         
  		}         

  	if (occur == N)     {       
  	return i;     }
       return -1; 

   }
}
int main()
{
   	#if !0
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif



	   string problem;
    getline(cin, problem);

    int a = stoi(problem.substr(0, problem.find(' ')));


    int b = stoi(problem.substr(problem.find('?') + 1, findNthOccur(problem, ' ', 3)));

    int c = stoi(problem.substr(problem.find('=') + 1, problem.size() - problem.find('=')));

	if(a + b == c)
	{
		cout << '+';
	}	
		if(a - b == c)
	{
		cout << '-';
	}	
		if(a * b == c)
	{
		cout << '*';
	}	
		if(a / b == c)
	{
		cout << '/';
	}	

}


