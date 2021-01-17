#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int num;
	cin >> num;
	string var = "";
	while(num > 1){
		stringstream temp;
		temp << num%2;
		string t;
		temp >> t;
		
		var += t;
		num /= 2;
	}
	var += "1";
	cout << var << endl;
	string new_var = "";
	for(int i = var.length()-1; i>=0; i--)
		new_var += var[i];
	
	cout << new_var << endl;
	
}
