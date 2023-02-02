#include <iostream>

template <class...Args>
class VarTempClass {
public:
	void sum_all(Args... args) {
		auto sum = (args + ...);
		std::cout << "Sum = " << sum << '\n';
	};
};

