#include <cstdlib>
#include <functional>
#include <iostream>
#include <limits>

int main(int argc,  char** argv){
	std::function<void(int)> check = [](int){};
	if( argc == 2 ){
		int check_against = atoi(argv[1]);
		check = [=](int number) -> void {
			if( check_against == number )
				std::cout << number;
		};
	}
	for(int i = 0; i < std::numeric_limits<int>::max(); ++i)
		check(i);
}

