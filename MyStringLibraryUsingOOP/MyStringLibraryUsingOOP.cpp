#pragma once
#include <iostream>
#include "clsString.h"
using namespace std;
int main() {
	clsString S1("Amal Al Alawi");
	clsString S2;
	S2.Value = "Amal Al Alawi";
	cout << S1.Value << endl;
	cout << S2.Value << endl;
	cout << S1.CountCapitalLetters() << endl;
	cout << clsString::CountCapitalLetters("Hi ,My Name Amal") << endl;
}
