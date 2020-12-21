#include<iostream>
#include<vector>
using namespace std;


int solve(vector<int>& pri) {
    int low, profit = 0;
    int n = pri.size();
    if (n == 0 || n == 1) return 0;
    low = pri[0];

    for (int i = 1; i < n; i++) {
        
		low = min(low, pri[i]);
        profit = max(profit, pri[i] - low);
    	
	//	cout << low << " " << profit << endl;
	}
    return profit;
}




int main(){
	//Testing
	int prices[6] = {9, 11, 8, 5, 7, 10};
	vector<int> vect(prices, prices + sizeof(prices)/sizeof(prices[0]));
	cout << solve(vect); 
	return 0;
}
