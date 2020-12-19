#include<iostream>
#include<string>
#include<vector>
using namespace std;





bool row_check(vector<vector<string>>&board, string word, int row, int index) {

	for (int i = 0; i < word.length(); i++) {
		string s = "";
		s.push_back(word[i]);
		if (board[row][index + i].c_str() == s) continue;
		else return false;
	}
	return true;
}
bool col_check(vector<vector<string>>&board, string word, int col, int index) {

	for (int i = 0; i < word.length(); i++) {
		string s = "";
		s.push_back(word[i]);
		if (board[index + i][col] == s) continue;
		else return false;
	}
	return true;
}
bool solve(vector<vector<string>>& board, string word) {

	//Row
	if (!(board[0].size() < word.length())) {
		for (int j = 0; j<board.size(); j++) {

			for (int i = 0; i<board[0].size(); i++) {
				if (board[0].size() - i < word.length()) break;
				string s = "";
				s.push_back(word[0]);
				if (s == board[j][i]) {

					if (row_check(board, word, j, i)) return true;
				}
			}
		}
	}
	//Col
	if (!(board.size() < word.length())) {

		for (int i = 0; i < board.size(); i += word.length()) {
			if (board.size() - i < word.length()) break;
			for (int j = 0; j<board[0].size(); j++) {
				string s = "";
				s.push_back(word[0]);
				if (s == board[i][j]) {

					if (col_check(board, word, j, i)) return true;

				}
			}
		}
	}


	return false;
}



int main() {

	vector<vector<string>> temp = { {"B", "B","A","D","E" },{ "C","E" ,"H" ,"L" ,"O" } };
	cout << solve(temp, "AH");
	system("pause");
	return 0;

}