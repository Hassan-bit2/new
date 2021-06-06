/*#include <iostream>

using namespace std;
Funcsqaure(int a)
{
	cout << int(a*a);
}

int main()
{
	int a;
	cout << "Enter a number for square\n";
	cin >> a;
	Funcsqaure(a);
}*/

/*#include <iostream>

using namespace std;
FuncCal(int a, string op, int b)
{
	cout << "Enter First number\n";
	cin >> a;
	cout << "Enter the operator\n";
	cin >> op;
	cout << "Enter Second Number\n";
	cin >> b;
	cout << "\n";
	
	if(op == "+")
	{
		cout << "Answer = " << int(a + b);
	}
	else if(op == "-")
	{
		cout << "Answer = " << int(a - b);
	}
	else if(op == "/")
	{
		cout << "Answer = " << int(a / b);
	}
	else if(op == "*")
	{
		cout << "Answer = " << int(a * b);
	}
	
}

int main()
{
	int a, b;
	string op;
	FuncCal(a, op, b);
}*/

/*#include <iostream>

using namespace std;
Funcadd(int a, int b)
{
	cout << int(a+b);
}

int main()
{
	int a, b;
	cout << "Enter First Number\n";
	cin >> a;
	cout << "Enter Second Number\n";
	cin >> b;
	Funcadd(a, b);
	return 0;
}*/

// Area of a circle 3.142*r*r
/*#include <iostream>

using namespace std;
CircleArea(int r)
{
	cout << "Area of the circle is " << 3.142*int(r*r);
}

int main()
{
	int r;
	cout << "Please Enter the radius of the circle\n";
	cin >> r;
	CircleArea(r);
}*/

// Area of a ring big circle - small circle
/* #include <iostream>

using namespace std;
RingArea(int r1, int r2)
{
	cout << "The area of the ring is:\n" << (3.142*int(r1*r1)) - (3.142*int(r2*r2));
}

int main()
{
	int r1, r2;
	cout << "Enter the radius of big circle\n";
	cin >> r1;
	cout << "Enter the radius of small circle\n";
	cin >> r2;
	RingArea(r1, r2);
}*/

// Volume of a sphere V = 4/3*pi*r*r*r
/*#include <iostream>

using namespace std;
VolumeSph(int r)
{
	cout << "Volume of the sphere is\n" << (4*3.142*r*r*r)/3;
}

int main()
{
	int r;
	cout << "Enter the radius of sphere\n";
	cin >> r;
	VolumeSph(r);
}*/

// Volume of a cube V = a*a*a
#include <iostream>

using namespace std;

void CubeVol(int a)
{
	cout << int(a*a*a);
}

int main()
{
	int a;
	cout << "Enter the side of cube\n" << endl;
	cin >> a;
	CubeVol(a);
}
