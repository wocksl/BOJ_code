#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int x1, y1, r1, x2, y2, r2;
	
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int x_exp = (x2 - x1) * (x2 - x1);
		int y_exp = (y2 - y1) * (y2 - y1);
		int sum = x_exp + y_exp;
		int dis = (r1 + r2) * (r1 + r2);
		int dif = (r2 - r1) * (r2 - r1);
		if (sum == 0) {
			if (dif == 0) { cout << "-1" << endl; }
			else { cout << "0" << endl; }
		}
		else if (sum == dis || sum == dif) {
			cout << "1" << endl;
		}
		else if(dif < sum && sum < dis){
			cout << "2" << endl;
		}
		else { cout << "0" << endl; }
	}
}