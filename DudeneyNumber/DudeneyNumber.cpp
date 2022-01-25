#include <iostream>

using namespace std;
// dudeney numbers explaination: https://www.houseofmaths.co.uk/2020/04/dudeney-numbers/
bool isDudeney(int num) {
	double x{ cbrt(num) };
	int prenum{ num };
	int sum{ 0 };
	while (prenum > 0)
	{
		sum += prenum % 10;
		prenum /= 10;
	}
	if (sum == x)
		return true;
	else
		return false;
}

int main()
{
    cout << isDudeney(512);
}

