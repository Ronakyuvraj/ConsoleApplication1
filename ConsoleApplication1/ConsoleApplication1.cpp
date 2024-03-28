#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

void divisors(int n) {
	vector<int> ls;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			ls.push_back(i);

			if (n / i != i) {
				ls.push_back(n / i);
			}


		}
	}
	sort(ls.begin(), ls.end());
	vector<int>::iterator itr;
	for (itr = ls.begin(); itr != ls.end(); itr++) {
		cout << *itr<<endl;
	}

}
int main() {
	int n;
	cin >> n;
	divisors(n);
}