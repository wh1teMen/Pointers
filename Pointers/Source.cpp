
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n,m;
	/* n = 10, m = 15;
	 int* pn= &n;
	cout << *pn <<"\t" << pn<<"\n";
	int sum = *pn + 10; cout << endl;
	cout << sum<<endl;
	*pn = -7;
	cout << n<<endl;
	cout << "###########################################\n";
	//pn = &m;
	//cout << pn << endl;
	int* pm = &m;
	cout << pm<<endl;
	cout << *pm<<endl;*/

	/*int arr[5] = {1,2,3,4,5};
	int* pArr = arr;
	cout << *(arr+1)<<endl;
	cout << *(pArr+2)<<endl;
	int* pArr3 = &arr[3];
	cout << *pArr3<<endl;
	cout << *(pArr3 - 1)<<endl;
	cout << "Изначальный массив:\n";
	cout << "[";
	for (int i = 0; i < 5; i++) {
		cout << *(pArr+i)<< ", ";
		
	}
	cout << "\b\b]";
	cout << endl;
	int sum = *(pArr + 2) + *(pArr + 4);
	cout << sum << endl;
	*pArr = 10;
	*(pArr + 3) = 55;
	*(arr + 3) = 111;

	cout << "Итоговый массив:\n";
	cout << "[";
	for (int i = 0; i < 5; i++) {
		cout << *(arr + i) << ", ";
	}
	cout << "\b\b]";
	cout << endl;*/

	//Задание дз 14
	cout << "Изначальный массив: \n[";
	const int lenght = 5;
	int z14[lenght];
	int sum=0, count=0;
	int* pz14 = z14;//int *pz14=&z14[0];
	for (int i = 0; i < lenght; i++) {
		*(pz14+i) = rand() % 10+1; 
		cout << *(pz14 + i) << ", ";
	}
	cout << "\b\b]";

	for (int i = 0; i < lenght; i++) {
		if (*(z14 + i) % 2 == 0) {
			sum += *(z14 + i);
			count++;
		}
	}
	cout << endl;
	cout << "Среднее врифметическое четных элемнетов массива = " << sum / count<<endl;










	cout << "\n\n\n\n\n\n";
	system("pause");
	return 0;

}