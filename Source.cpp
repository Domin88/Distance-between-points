#include <iostream>
#include <math.h> 

double f(double x1, double y1, double x2, double y2) {


	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); // Formula



}

int main() {
	int x1, x2, y1, y2;

	std::cout << " Enter coordinates : \n" << std::endl;
	std::cout << " X1 - ";
	std::cin >> x1;
	std::cout << " X2 - ";
	std::cin >> x2;
	std::cout << " Y1 - ";
	std::cin >> y1;
	std::cout << " Y2 - ";
	std::cin >> y2;

	if (x1==0 || x2==0 || y1==0 || y2==0)  //execption
		std::cout << " Error ,You entered zero" << std::endl;
	else
		std::cout << " The distance between two points equal to  " << f(x1, x2, y1, y2) << std::endl;
	
	return 0;

}