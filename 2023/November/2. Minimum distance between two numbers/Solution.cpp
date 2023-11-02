// Minimum distance between two numbers
// November 2, 2023
// C++ Code

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int mini=INT_MAX;
         int i=-1;
         int j=-1;
         int flag=-1;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                
                if(j!=-1 && flag==1){
                    mini=min(mini,i-j);
                }
                
                j=i;
                
                flag=0;
            }
            
            if(a[i]==y){
                if(j!=-1 && flag==0){
                    mini=min(mini,i-j);
                }
                j=i;
                flag=1;
            }
            
        }
        
        
        if(mini==INT_MAX)return -1;
        return mini;
        
    }
};
