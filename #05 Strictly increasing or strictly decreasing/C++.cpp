#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Funtion for Checking
bool check_array(vector<int> temp){

	//Checking if it is increasing or decreasing
	if (temp[1] > temp[0]){
	
		for(int i=0; i<temp.size()-2; i++){
		
			if (temp[i+1] > temp[i]) continue;
			else return false;	
			}
		}
	else{
		for(int i=0; i<temp.size()-2; i++){
			if (temp[i+1] < temp[i]) continue;
			else return false;	
			}
	}
	return true;
}
int main(){
	//int array[5] = {1,2,8,9};
	int array[5] = {2, 0, 0};
	//int array[5] = {1,2,3,5,5};
	//int array[5] = {5,4,4,3,1};
	vector<int>temp(array, array+5);
	cout << check_array(temp);
	
	return 0;
}
