#include <iostream>
#include <vector>

using namespace std;

struct Point {
	double x = 0.0;
	double y = 0.0;
	double m = 1.0;
};

Point gen_center_mass(vector<Point> v) {

	Point res;

	double x = 0.0;
	double y = 0.0;
	double m = 0.0;

	for (auto p : v) {
		x += p.x * p.m;
		y += p.y * p.m;
		m += p.m;
	}

	res.x = x / m;
	res.y = y / m;
	res.m = m;

	return res;

}

int main() {

	vector<Point> C = { Point{3, 4, 2} , Point{5, -1, 2}, Point{5, 4, 2} };

	Point p = gen_center_mass(C);

	cout << p.x << " " << p.y;

	return 0;
}