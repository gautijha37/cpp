#include <iostream>
#include <functional>

int main(){
//	std::cout << "Hello world"
	auto my_lambda = [out = std::ref(std::cout << "Hello World")](){
			out.get() << "of mine" << std::endl;
		};
	my_lambda();
	return 0;
}
