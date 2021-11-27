//geeksforgeeks
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            if (n < 2) {
                return -1;          
            }
            sort(arr, arr+n);      
            int low = 0, high = n-1, mini = INT_MAX; 
            while (low < high) {
                int sum = arr[low] + arr[high]; 
                if (abs(sum) < abs(mini)) {
                    mini = sum; 
                }
                else if (abs(sum) == abs(mini)) {
                    mini = max(mini, sum);
                }
                if (sum <= 0) {
                    low++; 
                }
                else {
                    high--;     
                }
            }
            return mini;
        }
};
