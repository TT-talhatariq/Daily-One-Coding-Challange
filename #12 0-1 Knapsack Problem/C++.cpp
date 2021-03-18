#include<iostream>
#include<iomanip>
using namespace std;
int knapsack(int N, int W, int val[], int wie[] ){
	
	
	if(N==0 || W == 0){
		return 0;
	}

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
 
	if(wie[N-1] > W){
			knapsack(N-1, W, val, wie);
	}
	
    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included	

	else{
            int n1 = val[N - 1] + knapsack(N-1, W - wie[N - 1], val, wie);
            int n2 = knapsack(N-1, W, val, wie);	
            return n1 > n2 ? n1 : n2; 
	}
	
}

int main(){
 
	int values[] = { 60, 100, 120 };
    int wieght[] = { 10, 20, 30};
    int W = 50;
    int n = sizeof(values) / sizeof(values[0]);
       
    cout << "Wieghts"  << left << setw(18) << right<< "Prices" << endl;
    for(int i=0; i<n; i++){
    	cout << wieght[i] << left << setw(20) << right << values[i] << endl;
	}
 	cout << "\n\nMaximum Achieved Benefit: ";
    cout << knapsack(n, W, values, wieght);
	
return 0;	
}

