#include <iostream>
using namespace std;


struct videoshop
{
	char name [7];
	char director[7];
	char genre[8];
	char popularity[15];
	char money[7];
};

int main()
{
	videoshop info = { "Viseop", "Fusher", "Mystery", "First place", "500$"};


	int choice;
	cout << " 1 = name\n 2 = director\n 3 = genre\n 4 = popularity\n 5 = money\nUr Num: ";
	cin >> choice;


	if (choice == 1) {
		cout << "name: " << info.name << "\n";
	}
	if (choice == 2) {
		cout << "director: " << info.director << "\n";
	}
	if (choice == 3) {
		cout << "genre: " << info.genre << "\n";
	}
	if (choice == 4) {
		cout << "popularity: " << info.popularity << "\n";
	}
	if (choice == 5) {
		cout << "money: " << info.money << "\n";
	}
	else {
		cout << "Wrong number" << "\n";
	}

	return 0;
}