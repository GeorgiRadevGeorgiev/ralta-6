#include <iostream>

using namespace std;


int main()
{
	// zadacha 1 
/*
	int num, sum = 0;
	cout << "Input num : ";
	cin >> num;

		for (int i = num; i <= num && i >= 0; i--) {
			sum += i;
			if (i > 0)
			cout << i << " + "; 
		}
		cout << 0;
		cout << " = " << sum << endl;
 */
	// zadacha 2 
/*
	int numA, numB, proiz = 1;
	cout << "Input num A  : ";
	cin >> numA;
	cout << "Input num B  : ";
	cin >> numB;

	if (numA < numB) {
		for (int i = numA; i <= numB; i++) {
			proiz *= i;


		}
		cout << "\nproizvedenie = " << proiz << endl;
	}
	else
		cout << "Error! Number A must be smaller than number B ! " << endl;
*/

	// zadacha 3
	 
/*
	int num;
	cout << "Input num : ";
	cin >> num;

	if (num >= 0 && num <= 10) {
		
		for (int i = num; i <= 100; i++) {


			if (i % 2 == 0 && i % 3 == 0)
				cout << i << " ";
		}
		cout << "\n";
	}
	else cout << "erorr! input num between 0 and 10!" << endl;
*/

  // zadacha 4 

/* 

	int num;
	bool flag = true;
	cout << "Input num : ";
	cin >> num;
	
	while (num <= 2) {
		cout << "\nnum must be larger than 2!" << endl;
		cin >> num;
	}
		
	for (int i = 2; i <= (num / 2) && flag; i++) {
		if (num % i == 0)
			flag = false;
		else
			flag = true;
	}
	
	cout << (flag ? "prosto" : "ne e prosto") << endl;

*/

	// zadacha 5

/* 
	int p, q;
	bool flag = true;
	cout << "Input num p  : ";
	cin >> p;
	cout << "Input num q  : ";
	cin >> q;
	
	while (p >= q) {
		cout << "\nq must be larger than p!" << endl;
		cout << "Input num p  : ";
		cin >> p;
		cout << "Input num q  : ";
		cin >> q;
	}

	for (int a = p; a <= q && flag; a++) {

		for (int i = 2; i <= (a / 2) && flag; i++) {

			if (a % i == 0)
				flag = false;
			else
				flag = true;
		}
		
		if (flag == true)
			cout << a << " ";
		flag = true;

	}
*/

// zadacha 6 

/* 
	int redove, chislo =1;
	cout << "input number of rows : ";
	cin >> redove;

	while (redove <= 0) {
		cout << "\nrows must be 1 or more!" << endl;
		cout << "input number of rows : ";
		cin >> redove;
	}
	
	for (int i = 1; i <= redove; i++) {
		for (int q = 1; q <= i; q++, chislo++) {
			cout << chislo << " ";

		}
		cout << "\n";

	}
*/

 // zadacha 7 

 /* 
	long num, sum = 0, ostatuk;
	cout << "Input num : ";
	cin >> num;
	
	while (num < 0 || num > 1000) {
		cout << "\nNum must be between 0 and 1000!" << endl;
		cout << "Input num : ";
		cin >> num;
	}
	
	for (long i = 1; num > 0; i *= 10) {
		ostatuk = num % 2;
		sum += (i * ostatuk);
		num /= 2;
	}
	cout << "\n" << sum << endl;
*/

 // zadacha 8

/*

int n, space, q = 1;
	cout << "input n : ";
	cin >> n;
		
	while (n <= 0) {
		cout << "\nn must be 1 or more !" << endl;
		cout << "input n :";
		cin >> n;
		}

	for (int i = 0; i < n; i++) {
		for (space = 1; space <= n - i; space++)
			cout << "..";

		for (int j = 0; j <= i; j++) {
		
			if (j == 0 || i == 0)
				q = 1;

			else
				q = q*(i - j + 1) / j;

			cout << "..." << q;
		}
		cout << endl;
	}

	*/

	system("pause");
	return 0;
}