#include <iostream>
#include <cassert>

class Stack {
public:
	int count; // �������� ������������� �������� ��� ������������ ����� �����
	int stack[10]; // �������� ������������� ������������� ������ ������ 10

	Stack() {
		stack[9] = { 0 };
		count = 0;
	}

	// �������� ����� � ������ reset(), ������� ����� ���������� ����� � ��� �������� ��������� �� 0.
	void reset() {
		count = 0;
		for (size_t i = 0; i < 10; i++)
		{
			stack[i] = 0;
		}
	}

	// �������� ����� � ������ push(), ������� ����� ��������� �������� � ����. 
	//����� push() ������ ���������� �������� false, ���� ������ ��� ��������, � ��������� ������ � true.

	bool push(int a) {
		if (count == 10)
		{
			return false;
		}
		else
		{
			stack[count] = a;
			count++;
		}
		return true;
	}

	// �������� ����� � ������ pop() ��� �������� �������� �� �����. ���� � ����� ��� ��������, 
	//�� ������ ���������� ��������������� ���������.

	int pop()
	{
		assert(count > 0);
		
		count -= 1;
		return stack[count];
	}

	// �������� ����� � ������ print(), ������� ����� �������� ��� �������� �����.

	void print() {
		std::cout << "( ";
		for (int i = 0; i < count; ++i)
			std::cout << stack[i] << ' ';
		std::cout << ")\n";
	}
};

int main()
{
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
	return 0;
}
