#include <bits/stdc++.h>
using namespace std;


int binomialCoeff(int n, int k)
{
	
	if (k > n)
		return 0;
	if (k == 0 || k == n)
		return 1;

	// Recur
	return binomialCoeff(n - 1, k - 1)
		+ binomialCoeff(n - 1, k);
}

/* Driver code*/
int main()
{
	long long int n,k;
    cin>>n>>k;
	cout << "Value of C(" << n << ", " << k << ") is "
		<< binomialCoeff(n, k);
	return 0;
}

