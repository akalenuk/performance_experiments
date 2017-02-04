#include <cstdlib>
#include <functional>
#include <iostream>
#include <limits>

int main(int argc,  char** argv){
	std::function<bool(int)> check;
	if( argc == 2 ){
		int check_against = atoi(argv[1]);
		check = [=](int number) -> bool {
			if( check_against == number )
				std::cout << number;
		};
	}
	for(int i = 0; i < std::numeric_limits<int>::max(); ++i)
		if(check)
			check(i);
}

