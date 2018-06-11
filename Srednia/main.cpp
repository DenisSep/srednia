#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	cout << "Wpisz swoje oceny przez spacje.\n" <<
		"  |  q  |  liczy sredna \n" <<
		"------------------------------------\n";

		int n, i = 0, sum = 0;
		while (cin >> n)
		{
			sum += n;
			if (n == 'q') break;
			i++;
		}
		double average = float(sum) / float(i);
		cout << "Suma: " << sum << endl;
		cout << "Srednia: " << round(average * 100) / 100 << endl;

	system("pause");
	return 0;
}