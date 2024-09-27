
#include "Lab2.h"

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double	p = (a + b + c) / 2 * 1.0;
	
	cout << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
	return 0;
}
