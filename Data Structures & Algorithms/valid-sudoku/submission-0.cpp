class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int r = 0; r < 9; r++) {
            unordered_set<char> seen;

            for (int c = 0; c < 9; c++) {
                char num = board[r][c];

                if (num == '.') continue;
                if (seen.count(num)) return false;

                seen.insert(num);
            }
        }

        for (int c = 0; c < 9; c++) {
            unordered_set<char> seen;

            for (int r = 0; r < 9; r++) {
                char num = board[r][c];

                if (num == '.') continue;
                if (seen.count(num)) return false;

                seen.insert(num);
            }
        }

        for (int br = 0; br < 9; br += 3) {
            for (int bc = 0; bc < 9; bc += 3) {

                unordered_set<char> seen;

                for (int r = br; r < br + 3; r++) {
                    for (int c = bc; c < bc + 3; c++) {

                        char num = board[r][c];

                        if (num == '.') continue;
                        if (seen.count(num)) return false;

                        seen.insert(num);
                    }
                }
            }
        }

        return true;
    }
};