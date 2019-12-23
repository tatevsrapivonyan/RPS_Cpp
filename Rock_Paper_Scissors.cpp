#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<char> rps;
	char user;
	
	cout << "Computer turn.\nWait!" << endl;
	for (char s; cin >> s;) {
		if (s == 'R' || s == 'P' || s == 'S') {
			rps.push_back(s);
		}
		else {
			cout << "Computer is ready!" << endl;
			break;
		}
	}
	
	for (char x : rps) {
	    cout << "It is your turn!" << endl;
		cin >> user;
		
		switch (x) {
		case('R'):
			if (user != 'R' && user != 'S' && user != 'P') {
					cout << "Wrong Character!" << endl;
				}
			else {
					if (user == 'R') {
						cout << "Draw!" << endl;
					}
					if (user == 'P') {
						cout << "User Won." << endl;
					}
					if (user == 'S') {
						cout << "User Lose." << endl;
					}
				}
			break;
		case('P'):
			if (user != 'R' && user != 'S' && user != 'P') {
					cout << "Wrong Character!" << endl;
				}
			else {
					if (user == 'P') {
						cout << "Draw!" << endl;
					}
					if (user == 'R') {
						cout << "User Lose." << endl;
					}
					if (user == 'S') {
						cout << "User Won." << endl;
					}
				}
			break;
		case('S'):
			if (user != 'R' && user != 'S' && user != 'P') {
					cout << "Wrong Character!" << endl;
				}
			else {
					if (user == 'S') {
						cout << "Draw!" << endl;
					}
					if (user == 'P') {
						cout << "User Lose." << endl;
					}
					if (user == 'R') {
						cout << "User Won." << endl;
					}
				}
			break;
		default:
			break;
		}
	}
}