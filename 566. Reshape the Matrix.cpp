class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>v(r,vector<int>(c));
        int tr = 0;
        int tc = 0;
        if(r*c!=mat.size()*mat[0].size())
            return mat;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                // cout<<tr<<" "<<tc<<endl;
                if(tc<c){
                    v[tr][tc++] = mat[i][j];
                }else{
                    tr++;
                    tc = 0;
                    j--;
                }
            }
        }
        return v;
    }
};
