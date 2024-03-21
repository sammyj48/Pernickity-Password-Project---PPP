#include <iostream>

using namespace std;

int main() {

	string Password1;
	string Password2;

	cout << "This prgram will verify if your password is correct (OR NOT!!)\n";

	Password1 = "PoopyDoopyDoo";

	cout << "\nPlease enter your password here: ";

	cin >> Password2;

	if (Password1 == Password2) cout << "\nYou have access!!!!!!!!!!! Enter at your peril!!!!!!!!\n";

	else if (Password1 != Password2) cout << "\nYour password is incorrect!!!!!!!! Go home loser!!!!";


}