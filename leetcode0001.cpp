class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0, score = 0;
        
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[i].size(); j++){
                score += accounts[i][j];
            }
            if(score > max){
                max = score;
            }
            score = 0;
        }
        
        return max;
    }
};
