class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int>mp;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j]!='.'){
                    int box = (i/3)*3+(j/3)+1;
                    string b = to_string(box);
                    string r = to_string(i);
                    string c = to_string(j);
                    string s1,s2,s3;
                    s1 = "box"+b+board[i][j];
                    s2 = "row"+r+board[i][j];
                    s3 = "col"+c+board[i][j];
                    if(mp[s1]>0||mp[s2]>0||mp[s3]>0)
                        return false;
                    mp[s1]++;
                    mp[s2]++;
                    mp[s3]++;
                }
            }
        }
        return true;
    }
};
