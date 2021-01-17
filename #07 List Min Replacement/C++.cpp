#include<iostream>
#include<vector>
using namespace std;

int minimum(vector<int>& temp, int index){
	int temp_min = INT_MAX;
	for(int i=0; i<=index; i++){
		
		if(temp[i] < temp_min) temp_min = temp[i];
		
		}
	return temp_min;
}
vector<int> solve(vector<int>& nums) {
	
	for (int i=1; i<nums.size(); i++){
		int temp = minimum(nums, i);
		nums[i] = temp; 	
	}
	return nums;
}
int main(){
	
	int arr[4] = {10,5,7,9};
	vector <int> abc(arr , arr+4);
	vector <int>dge = solve(abc);
	for(int i=0; i<dge.size(); i++)
		cout << dge[i] << endl; 
	return 0;
	
}
