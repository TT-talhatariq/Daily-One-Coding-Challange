#include<iostream>
#include<vector>
using namespace std;
vector <int> test(vector<int>&);
void display(vector<int>&);
int main(){
	int arr[3] = {2,1,3};
	vector <int> array(arr, arr+3);
	cout << "List Before: " << endl;
	display(array);
	cout << "\nList After: " << endl;
	vector <int> var = test(array);
	display(var);
	return 0;
	
}
vector <int> test(vector <int>& arr){
	vector <int> temp;
	int sum = 1;
	for(int i=0; i<arr.size(); i++){
		sum*=arr[i];
	}
	for(int i=0; i<arr.size(); i++){
		temp.push_back(sum/arr[i]);
	}
	return temp;
}

void display(vector<int>&obj){
	cout << "[";
	for (int i=0; i<obj.size(); i++)
		cout << obj[i] << ", ";
		cout << "\b\b]";
}
