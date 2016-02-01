#include

using std::cout;
using std::endl;

int main()
{
	void fun2(int x) {
		if (x < 1)
			std::cout << "\nDONE";
		else {
			std::cout << x;
			fun2(x - 1);
		}
	}

	return 0;
}