#include <iostream> 
#include <string> 

using namespace std;

class A {
public:
	A() { delete[] data; }
	A(int);
	int size();
	int& operator[ ](int);
	const int& operator[ ](int) const;


private:
	int* data;
	int arrSize;
};

A::A(int size) {
	this->arrSize = size;
	data = new int[arrSize];

	for (int i = 0; i < arrSize; i++)
		data[i] = i;
}

int A::size() {

	return arrSize;
}

int& A::operator[](int a)
{
	return data[a];
}

const int& A::operator[](int a) const
{
	return data[a];
}

int main() {
	A a1;
	A a2(10); //10 Ц размер массива 
	A a3 = a2;
	a1 = a3;
	a2 = A(20);
	const A a4(5);
	for (int i = 0; i < a2.size(); i++)
	{
		cout << a4[i];
	}
}





