#include<bits/stdc++.h>
using namespace std;
#define print(x) cout << x;
#define printl(x) cout << x << '\n';
int sum(int a, int b);
void passByValue(int n);
void passByReference(string &s);
// Rather creating new methods on top, we can create at bottom but have to define the method above here
int main(){

	// Data types 
	//mostly used in cp(int, long, long long, float, double, string, char, bool, getline)
	int i = 10;// -10^9 to 10^9						// -2147483648 to 2147483647 (correct for 32-bit int)
	long l = 15234L;// -10^12 to 10^12				// -9223372036854775808 to 9223372036854775807
	long long ll = 1231231LL;// -10^18 to 10^ 18    // -9223372036854775808 to 9223372036854775807 (range for a 64-bit long long)
	float f = 1.232132f;                            // Precision ~7 decimal digits
	double d = 234234.2342342;                      // Precision ~15-17 decimal digits
	long double ld = 3.141592653589793238462643383L;// Precision > double, system/compiler specific, often 80 bits (about 18-19 decimal digits)
	bool b = true;                                  // true or false
	char c = 'a';                                   // -128 to 127 or 0 to 255 depending on whether char is signed or unsigned
	string s = "String";                            // Not a fundamental type, but a Standard Library type
	auto a = 423423.33;								// Auto asigns the data type to the value

	// string & getline
	string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << "---" << s2 << "\n";
	string s3;
	getline(cin, s3);
	getline(cin, s3); 
/*  with only one getline(cin, s3) we won't get s3 printed 
	because there is \n in the stream, so we need 2 getline(cin, s3)
*/
	cout << s3 << '\n';

	// Conditions & Operators
	int age = 18;
	if(age >= 18) {
		printl("You are an adult");
	} else if(age < 10) {
		printl("You are a child");		
	} else {
		printl("You are not an adult")
	}
	// Ternary Operator --> (condition) ? (expression1) : (expression2);
	(5 > 1) ? (cout << "5 is greater\n") : (cout << "5 is lesser\n");
	int day = 9;
	switch(day) {
		case 1: cout << "Monday\n"; break;
		case 2: cout << "Tuesday\n"; break;
		case 3: cout << "Wednesday\n"; break;
		case 4: cout << "Thursday\n"; break;
		case 5: cout << "Friday\n"; break;
		case 6: cout << "Saturday\n"; break;
		case 7: cout << "Sunday\n"; break;
		default: cout << "Invalid day\n";
		// we don't need to give break, if we don't have anything to compile after default		
	}

	// Arrays : Arrays are stored in consecutive memory address

	int arrays[5];
	cout << arrays[2];  // Prints a garbage value, because we haven't initiated
	cin >> arrays[0]  >> arrays[1]  >> arrays[2]  >> arrays[3]  >> arrays[4]; // 0 index based
	cout << "\n";
	arrays[3] = 99;		// Updating an array
	for(int arr: arrays) {
		cout << arr << " ";
	} cout << "\n";
	// arrays[6]; // This will give index out of exception, array's size is 5 but we try to access its 6th position

	// 2D Array & Looping an array

	int arr[3][3];
	int len = end(arr)-begin(arr);  // Easy way to calculate array's length
	cout<<"The Length of the Array is : "<<len << '\n'; //length
	for (int ii = 0; ii < len; ++ii){
		for (int jj = 0; jj < 3; ++jj){
			cin >> arr[ii][jj];
		}
	}

	for (int ii = 0; ii < len; ++ii){
		for (int jj = 0; jj < 3; ++jj){
			cout << arr[ii][jj] << ' ';
		} cout << '\n';
	}

	string s4 = "Murali";
	cout << s4[1] << " --> length of this string is "<< s4.size() << "\n";
	cout << "last index of Murali is "<< s4[s4.size()-1] << "\n";
	s4[s4.size()-1] = 'z';  // String is mutable
	cout << "last index of Murali is "<< s4[s4.size()-1] << "\n";
	cout << s4 << "\n";

	// Loops
	int k;
	for(k = 1; k < 10; ++k) {
		print(k);
	}cout << '\n';
	cout << "k: "<< k << '\n';

	while(k>0){
		cout << k << ' ';
		k--;
	}
	cout << "k: "<< k << '\n';

	do {
		cout << k << ' ';
		k++;
	} while(k<10);
	cout << "k: "<< k << '\n';

	// Functions

	cout << "Sum of 5 & 5 is " << sum(5,5) << '\n';

	// Math
	cout << "Min of 10, 5 is "<<min(10,5) << '\n';
	cout << "Max of 10, 5 is "<<max(10,5) << '\n';
	cout << "Square root of 64 is " << sqrt(64) << '\n';
	cout << "Rounding 2.6 to " << round(2.6) << '\n';
	cout << "Rounding 2.6 to its ceiling is " << ceil(2.6) << '\n';
	cout << "Rounding 2.6 to its floor is " << floor(2.6) << '\n';
	cout << "Log of 2 is " << log(2) << '\n';
	cout << "34 power 3 is " << pow(34,3) << '\n';

	// Pass by value
	int i1 = 1;
	passByValue(i1);
	cout <<"i1 should have been 11 but it is "<< i1 << " because the value has been passed not the reference" << '\n';
	// But array will always goes to the function by a reference only
	// Pass by reference
	string s5 = "Raj";
	passByReference(s5); // We are sending the address of the s5, as in the method definition we put '&'
	print(s5);


	return 0;
}

int sum(int a, int b){
	return a + b;
}
// Pass by value
void passByValue(int n){
	cout << n << '\n';
	n+=5;
	cout << n << '\n';
	n+=5;
	cout << n << '\n';
	
}
void passByReference(string &s){
	s[0] = '$';
}


/*input for this file

Murali
dharan
s3
9 8 7 6 5
1 2 3
4 5 6
7 8 9
*/