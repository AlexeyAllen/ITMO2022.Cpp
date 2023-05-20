#include <iostream>

void SieveOfEratosthenes(int n, bool isPrime[])
{
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i <= n; i++)
		isPrime[i] = true;

	for (int p = 2; p * p <= n; p++) {
		if (isPrime[p] == true) {
			for (int i = p * 2; i <= n; i += p)
				isPrime[i] = false;
		}
	}
}

void superPrimes(int n)
{
	bool* isPrime = new bool[n + 1];
	SieveOfEratosthenes(n, isPrime);

	int* primes = new int[n], j = 0;
	for (int p = 2; p <= n; p++)
		if (isPrime[p])
			primes[j++] = p;

	for (int k = 0; k < j; k++) {
		if (isPrime[k + 1] && primes[k] == n) {
			std::cout << "The entered number " << n << " is super-prime";
			break;
		}
		else if (k == j - 1) {
			std::cout << "The entered number " << n << " is not a super-prime";
		}
	}
}

int main() {

	int n = 0;
	std::cout << "Please input an unsigned int number to check whether it is a super-prime number: ";
	std::cin >> n;
	superPrimes(n);
}





//if (x * x + y * y < 9 && y > 0)
//// "внутри"
//else if (x * x + y * y > 9 || y < 0)
//	// "снаружи"
//else // "на границе"

//#include <iostream>
////#include <string>
//#include <math.h>
//
//using namespace std;

//int main() {
//	system("chcp 1251");
//
//	char op;
//	cout << "Сделай свой выбор, собери авто свой мечты: ";
//	cin >> op;
//
//	switch (op)
//	{
//	case 'S':
//		cout << "Радио играть должно\n";
//		/*cout << "Колеса круглые\n";
//		cout << "Мощный двигатель\n";*/
//		//break;
//	case 'V':
//		cout << "Кондиционер хочу\n";
//		cout << "Радио играть должно\n";
//		/*cout << "Колеса круглые\n";
//		cout << "Мощный двигатель\n";*/
//		//break;
//	default:
//		cout << "Колеса круглые\n";
//		cout << "Мощный двигатель\n";
//	}
//}

//int main() {
//
//	double x, x1, x2, y;
//	cout << "x1 = "; 
//	cin >> x1;
//	cout << "x2 = "; 
//	cin >> x2;
//	cout << "\tx\tsin(x)\n";
//
//	x = x1;
//	do
//	{
//		y = sin(x);
//		cout << "\t" << x << "\t" << y << endl;
//		x = x + 0.01;
//	} while (x <= x2);
//	return 0;
//}

//#include <iostream> 
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//	int a, b, c;
//	int k = 0, n = 10;
//	for (int i = 1; i <= n; i++)
//	{
//		// инициализация операндов случайными числами от 1 до 10
//		a = rand() % 10 + 1;
//		b = rand() % 10 + 1;
//		cout << a << " * " << b << " = ";
//		cin >> c;
//		if (a * b != c)
//		{
//			k++; // операция «инкремент», аналогично: k = k + 1
//			cout << "Error! ";
//			cout << a << " * " << b << " = " << a * b << endl;
//		}
//	}
//	cout << "Count error: " << k << endl;
//	return 0;
//}

//for (int i = 1; i <= 100; i++)
//{
//	if ((i > k) && (i < m))
//		continue;
//	s += i;
//}


//
//#include <iostream>
//using namespace std;

// C++ program to print super primes less than  or equal to n.
//#include <bits/stdc++.h>
//using namespace std;

// Generate all prime numbers less than n.
//void SieveOfEratosthenes(int n, bool isPrime[])
//{
//	// Initialize all entries of boolean array as true. A
//	// value in isPrime[i] will finally be false if i is Not
//	// a prime, else true bool isPrime[n+1];
//	isPrime[0] = isPrime[1] = false;
//	for (int i = 2; i <= n; i++)
//		isPrime[i] = true;
//
//	for (int p = 2; p * p <= n; p++) {
//		// If isPrime[p] is not changed, then it is  a prime
//		if (isPrime[p] == true) {
//			// Update all multiples of p
//			for (int i = p * 2; i <= n; i += p)
//				isPrime[i] = false;
//		}
//	}
//
//}
//
//// Prints all super primes less than or equal to n.
//void superPrimes(int n)
//{
//	// Generating primes using Sieve
//	bool* isPrime = new bool[n + 1];
//	SieveOfEratosthenes(n, isPrime);
//
//	// Storing all the primes generated in a an array
//	// primes[]
//	int* primes = new int[n + 1];
//	int j = 0;
//	for (int p = 2; p <= n; p++)
//		if (isPrime[p])
//			primes[j++] = p;
//
//	// Printing all those prime numbers that occupy prime
//	// numbered position in sequence of prime numbers.
//	for (int k = 0; k < j; k++)
//		if (primes[k] == n)
//			cout << "Number "<< n << " is super-prime number";
//		else
//		{
//			continue;
//		};
//}
//
//// Driven program
//int main()
//{
//	int n = 23;
//	//cout << "Super-Prime number is: " << endl;
//	superPrimes(n);
//	return 0;
//}
