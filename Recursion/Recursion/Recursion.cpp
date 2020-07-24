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
		cout << "1번 원판을 " << from << "번 막대에서 " << to << "번 막대로 이동\n";
		return 1;
	}
	else {
		hanoi(n - 1, from, to, tmp);
		cout << n << "번 원판을 " << from << "번 막대에서 " << to << "번 막대로 이동\n";
		hanoi(n - 1, tmp, from, to);
	
	}
}

int main(void)
{
	int factorial_number;
	int fibonacci_number;
	int hanoi_number;
	int choose;

	cout << "어떤 Recursion을 사용하십니까?\n" << "1.Factoral 2.Fibonacci 3.Hanoi\n";

	cin >> choose;

	if (choose == 1) {

		cout << "factorial 값을 구할 숫자를 입력하시오.\n";

		cin >> factorial_number;

		cout << factorial_number << "의 factorial 값은 " << factorial(factorial_number) << " 입니다\n";

	}

	if (choose == 2) {

		cout << "몇 번째 피보나치 값을 구하겠습니까.\n";

		cin >> fibonacci_number;

		cout <<  fibonacci_number << "번째의 피보나치 값은 " << fibonacci(fibonacci_number) << " 입니다\n";
	
	}

	if (choose == 3) {
		
		cout << "원판이 몇개 입니까? \n";
		
		cin >> hanoi_number;

		hanoi(hanoi_number, 1, 2, 3);
	}

	
	return 0;
}