#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите целое положительное число:"<<"\n";
	long double a; cin>>a;
	while (a < 0)
	{
		cout << "Введите целое положительное число:"<<"\n";
		long double a; cin>>a;
		break;

	}
	int i = 0;
	int j = 0;
	while (i <= a)
	{
		j += i;
		i += 1;
	}
	cout << "Сумма всех чисел = "<< j<<"\n"<<"\n";

	int t = 0;
	
	int arr[] = { 11,3,32,5,3,7,8,9,19,1 };
	cout <<"Первое число = "<< arr[0]<<"\n";
	cout <<"Второе число = "<< arr[1]<<"\n";
	cout <<"Третье число = "<< arr[2]<<"\n";
	cout <<"Четвертое число = "<< arr[3]<<"\n";
	cout <<"Пятое число = "<< arr[4]<<"\n";
	cout <<"Шестое число = "<< arr[5]<<"\n";
	cout <<"Седьмое число = "<< arr[6]<<"\n";
	cout <<"Восьмое число = "<< arr[7]<<"\n";
	cout <<"Девятое число = "<< arr[8]<<"\n";
	cout <<"Десятое число = "<< arr[9]<<"\n";

	cout << "Числа, стоящие на четных позициях массива: ";
	while (t < 10)

	{
		if (t % 2 == 0)
		{

			cout << arr[t]<<", ";
			t += 1;
		}
		else
		{
			t += 1;
		}
	}
	cout << "\n";

	int sum = 0;
	int r = 0;
	cout << "Сумма чисел стоящих на нечетных позициях массива: ";
	while (r < 10)
	{

		if (r % 2 != 0)
		{
			sum += arr[r];
			r += 1;

		}
		else
		{
			r += 1;
		}
		
	}
	cout << sum;
}