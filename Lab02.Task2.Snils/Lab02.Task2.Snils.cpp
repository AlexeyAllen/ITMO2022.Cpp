#include <iostream>
#include <string>


int checkSumCalc(std::string);
int checkControlSum(int);


int main()
{
	std::string snilsNumber;
	std::cout << "Enter SNILS number (11 int numbers)\n";
	std::cin >> snilsNumber;

	if (snilsNumber.size() == 11)
	{
		int checkSum = checkSumCalc(snilsNumber);
		int calcControlSum = std::stoi(snilsNumber.substr(9, 2));
		if (checkSum == calcControlSum)
		{
			std::cout << "Input number is a valid SNILS number\n";
			return true;
		}
		else
		{
			std::cout << "Input number is not a valid SNILS number\n";
			return false;
		}

	}
	else
	{
		std::cout << "Input number is not a valid SNILS number\n";
	}
	
}

int checkSumCalc(std::string snilsElevenDigits) {

	std::string substrNineDigs = snilsElevenDigits.substr(0, 9);
	int sum = 0;
	for (int i = substrNineDigs.size() - 1, j = 0; i >= 0; i--, j++)
	{
		int numFromSubstr = substrNineDigs[i] - '0';
		sum += numFromSubstr * (j + 1);
	}

	return checkControlSum(sum);
}

int checkControlSum(int controlSum) {
	int result = 0;

	if (controlSum < 100) {
		result = controlSum;
	}
	else if (controlSum == 100 || controlSum == 101) {
		result = 0;
	}
	else
	{
		int balance = controlSum % 101;
		result = checkControlSum(balance);
	}
	return result;
}
