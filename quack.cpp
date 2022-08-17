#include <iostream>
#include <string>
#include <random>

using namespace std;

string owofied(string s) {

	string str = "";

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'r')
			str += "w";
		else if (s[i] == 'l')
			str += "w";
		else if (s[i] == 'e')
			str += "we";
		else if (s[i] == 'a')
			str += "ya";
		else if (s[i] == 'u')
			str += "wu";
		else if (s[i] == 'i')
			str += "wi";
		else if (s[i] == 'd') {
			int ran = rand() % 3 + 1;
			if (ran == 1) {
				str += "d-d-d";
			}
			else
				str += s[i];
		}
		else if (s[i] == '!')
			str += "!11";
		else if (s[i] == ' ') {
			int ran = rand() % 7 + 1;
			if (ran == 1) {
				str += " OwO ";
			}
			else if (ran == 2) {
				str += " *nuzzles your bulge* ";
			}
			else
				str += s[i];
		}
		else
			str += s[i];
	}

	int num = rand() % 3 + 1;

	if (num == 1) {
		return str + " XD";
	}
	else if (num == 2) {
		return str + " rawr xd";
	}
	else if (num == 3) {
		return str + " uwu";
	}
}

bool lop = true;

int main() {
	while (lop) {
		cout << "enter sentence to owoify" << endl;

		string inputowo;
		getline(cin, inputowo);

		cout << "= " << owofied(inputowo) << endl;
	}
}