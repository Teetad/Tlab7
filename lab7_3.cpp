#include<iostream>
using namespace std;

char before(char x){
	if (x == 'A'){
		return 'Z';
	}
	if (x > 'Z' or x < 'A'){
		return '0';
	}
	x -= 1;
	return x;
}

int main(){
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
