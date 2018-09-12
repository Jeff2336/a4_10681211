#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cout << "Enter your numbers :";
	cin >> a;
	cin >> b;
	
	int ab=min(a,b);
	int GCD=1;
	for (int i=1; i<=ab; i++)
	{
		if (a%i==0 && b%i==0)
		{
			GCD=max(GCD,i);
		}
	}
	cout << "Greatest Common Divisor is : "<<GCD<<endl;
	return 0;
}
