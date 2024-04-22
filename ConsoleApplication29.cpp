#include <iostream> 

using namespace std;

int main() {
	int sum = 0;
	for (int i = 5; i <= 101001010; i++) {
		sum = sum + i;
	}
	cout << "Сумма чисел от 5 до 101001010: " << sum << endl;
	return 0;
}
