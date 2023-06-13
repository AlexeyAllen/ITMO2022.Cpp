#include <iostream>
#include <cassert>

class Stack {
public:
	int count; // Открытое целочисленное значение для отслеживания длины стека
	int stack[10]; // Открытый целочисленный фиксированный массив длиной 10

	Stack() {
		stack[9] = { 0 };
		count = 0;
	}

	// Открытый метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0.
	void reset() {
		count = 0;
		for (size_t i = 0; i < 10; i++)
		{
			stack[i] = 0;
		}
	}

	// Открытый метод с именем push(), который будет добавлять значение в стек. 
	//Метод push() должен возвращать значение false, если массив уже заполнен, в противном случае — true.

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

	// Открытый метод с именем pop() для возврата значений из стека. Если в стеке нет значений, 
	//то должно выводиться предупреждающее сообщение.

	int pop()
	{
		assert(count > 0);
		
		count -= 1;
		return stack[count];
	}

	// Открытый метод с именем print(), который будет выводить все значения стека.

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
