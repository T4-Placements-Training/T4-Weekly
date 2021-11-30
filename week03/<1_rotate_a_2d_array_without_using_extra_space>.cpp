//Geeksforgeeks
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here   
	    int left = 0, right = n-1, top = 0, bottom = n-1; 
	    while (left < right) {
	        int i = 0;
	        while (left + i < right) {
	            int temp1 = arr[top+i][left]; 
	            arr[top+i][left] = arr[top][right-i]; 
	            int temp2 = arr[bottom][left+i];
	            arr[bottom][left+i] = temp1;
	            int temp3 = arr[bottom-i][right];
	            arr[bottom-i][right] = temp2; 
	            arr[top][right-i] = temp3;
	            i++;
	        }
	        left++;
	        right--;
	        bottom--;
	        top++;
	    }
	}

};
