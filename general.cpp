// Circumference of circle = 2*3.142*r
#include <iostream>

using namespace std;

CircleCircum(int r)
{
	cout << "The circumference of the circle is\n" << 2*3.142*r;
}
int main()
{
	int r;
	cout << "Please enter radius of circle\n";
	cin >> r;
	CircleCircum(r);
}
