#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<' ';
#define printl(x) cout<<x<<'\n';
bool isPrime(int x);
int main(int argc, char const *argv[]){

	int x;
	cin>>x;
	cout<<x+1<<'\n';
	string name; 
	// cin>>name;		// cin gets the input till the escape character
	getline(cin,name);	// getline gets the whole line of input, basically till next \n
	// getline(cin,name);
	cout<<"Hello, "<< name <<"\n"; 
	 /* (command+option+/)
	 This above program will not print the name because there is a "\n" in the stream,
	 if you put 2 getline(cin, name) it will work
	 */
	if(name=="Murali" || name=="dharan"){
		cout<<"Instructor\n";
	} else if(name=="Nehru"){
		cout<< "Nehru\n";
	}
	else cout << "Student\n";

	for (int i = 1; i < 10; ++i){
		print(i);
	}cout<<endl;

	cout<<"31 is (1-prime:0-nonPrime) ==> "<<isPrime(31);

	// Arrays
	int arr[10];
	
	return 0;
}

bool isPrime(int x){
	for (int i = 2; i < x; ++i){
		if(x%i==0)return 0;
	}
	return 1;
}