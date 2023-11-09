// Predict the Column
// November 9, 2023
// C++ Code

class Solution{
    public:
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int col=-1, maxZero=0;
        for(int j=0;j<N;j++){
            int cnt=0;
            for(int i=0;i<N;i++){
                if(arr[i][j]==0) cnt++;
            }
            if(cnt>maxZero){
                maxZero=cnt;
                col=j;
            }
        }
        return col;
    }
};
