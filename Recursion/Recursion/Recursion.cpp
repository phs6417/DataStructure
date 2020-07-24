#include <iostream>
#include <string>
//#include "factorial.cpp"
//#include "fibonacci.cpp"

using namespace std;

int factorial(int n) {
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);

}

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);


}

int hanoi(int n, int from, int tmp, int to) {
	if (n == 1) {
		cout << "1�� ������ " << from << "�� ���뿡�� " << to << "�� ����� �̵�\n";
		return 1;
	}
	else {
		hanoi(n - 1, from, to, tmp);
		cout << n << "�� ������ " << from << "�� ���뿡�� " << to << "�� ����� �̵�\n";
		hanoi(n - 1, tmp, from, to);
	
	}
}

int main(void)
{
	int factorial_number;
	int fibonacci_number;
	int hanoi_number;
	int choose;

	cout << "� Recursion�� ����Ͻʴϱ�?\n" << "1.Factoral 2.Fibonacci 3.Hanoi\n";

	cin >> choose;

	if (choose == 1) {

		cout << "factorial ���� ���� ���ڸ� �Է��Ͻÿ�.\n";

		cin >> factorial_number;

		cout << factorial_number << "�� factorial ���� " << factorial(factorial_number) << " �Դϴ�\n";

	}

	if (choose == 2) {

		cout << "�� ��° �Ǻ���ġ ���� ���ϰڽ��ϱ�.\n";

		cin >> fibonacci_number;

		cout <<  fibonacci_number << "��°�� �Ǻ���ġ ���� " << fibonacci(fibonacci_number) << " �Դϴ�\n";
	
	}

	if (choose == 3) {
		
		cout << "������ � �Դϱ�? \n";
		
		cin >> hanoi_number;

		hanoi(hanoi_number, 1, 2, 3);
	}

	
	return 0;
}