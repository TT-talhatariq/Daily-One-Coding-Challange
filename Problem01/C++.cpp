#include<iostream>
#include<Vector>
#include<algorithm>
using namespace std;
bool check_pair(vector <int> obj, int number);

int main(){
 
	int arr[5] = {3,4,2,8,6};
	vector <int> array(arr, arr+10); 
	
	int num;
	cout << "Enter the Number: ";
	cin >> num;

	cout << "There exist such two elements for which their sum is equal to number "<< num <<  " is: " <<boolalpha << check_pair(array, num) << endl;
	return 0;	
	
}

bool check_pair(const vector <int> obj, int number){
	
	vector <int> temp;
	
	for(int i = 0; i < obj.size()-1; i++){
			
		if( find(obj.begin(), obj.end(), number-obj[i]) != obj.end() ) return true;
		
		else temp.push_back(obj[i]);
	
}	
	return false;
}
