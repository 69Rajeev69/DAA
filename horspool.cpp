#include <bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 256


int main()
{
	string txt= "ABAAABCD";
	string pat = "ABC";

size_t found = txt.find(pat);
  if (found != string::npos)
    cout << "First occurrence is " <<
             found << endl;
}