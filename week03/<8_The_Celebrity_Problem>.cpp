//geeksforgeeks
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int a = 0, b = n-1; 
        while (a < b) {
            if (M[a][b] == 1) {
                a++;
            }
            else {
                b--;
            }
        }
        for (int i=0;i<n;i++) {
            if (i==a) {
                continue; 
            }
            if (M[a][i] == 1 || M[i][a] == 0) {
                return -1;
            }
        }
        return a;
    }
};
