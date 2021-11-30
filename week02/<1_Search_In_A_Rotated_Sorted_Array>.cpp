//geeksforgeeks
class Solution{
    public:
    int search(int A[], int l, int h, int key){
    //complete the function here
        while (l <= h) {
            int mid = l + (h-l)/2;
            if (A[mid] == key) {
                return mid;
            }
            else if (A[mid] >= A[l]) {
                if (key > A[mid] || key < A[l]) {
                    l = mid + 1;
                }
                else {
                    h = mid - 1;
                }
            }
            else {
                if (key < A[mid] || key > A[h]) {
                    h = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
        }
        return -1;
    }
};
