#include <iostream>
bool is_leap_year(int Y){
	return Y % 4 == 0 && (Y % 100 != 0 || Y % 400 == 0);
}
int main(){
	int year;
	std::cout << "Enter a year:";
	std::cin >>year;
	if (is_leap_year(year)){
		std::cout << " true is a leap year." <<std::endl;
	}else{
		std::cout <<"false is not a leap year."<< std::endl;
	}
	return 0;
}
