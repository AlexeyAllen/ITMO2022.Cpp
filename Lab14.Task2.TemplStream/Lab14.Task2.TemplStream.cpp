#include <iostream>
#include <vector>

template <typename Cont>
void Print(const Cont& data, const std::string& stringDiv) {
	bool flag = true;

	for (const int& item : data) {
		if (!flag) {
			std::cout << stringDiv;
		}
		else {
			flag = false;
		}

		std::cout << item;
	}

	std::cout << "\n";
}

int main() {
	std::vector<int> data = { 1,2,3,4,5 };
	Print(data, ", ");
}