#include <iostream>
#include <string>
using namespace std;

string CodelandUsernameValidation(string str) {
 
    //Length Testing Funtion 
	 if(str.length() > 25 || str.length() < 4)
  			return "false";
	
	//Must start with leter Testing
	if((str[0] < 65 || str[0] > 122) || (str[0] > 90 && str[0] < 97))
		return "false";

	str[0] = str[str.length()-1];
	//Last Character is not Underscore Testing
	if(str[0] == '_')
		return "false";

	//Only Letters, Numbers, Underscore Chracater Testing
	for(int i=0; i<str.length(); i++){
		if (((str[i] < 65 || str[i] > 122) || (str[i] > 90 && str[i] < 97)) && !(str[i] <= 57 && str[i] >= 48) && str[i] != '_'){
		
					cout << str[i] << endl;
					return "false";
			}
			}
			

	return "true";
}

int main(void) { 
   
  // keep this function call here
  string password;
  cin >> password;
  cout << CodelandUsernameValidation(password);
  return 0;
    
}
