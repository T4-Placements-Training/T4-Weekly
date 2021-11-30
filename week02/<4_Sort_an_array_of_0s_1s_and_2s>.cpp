//geeksforgeeks
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int low = 0, high = n-1, mid = 0;
        while (mid <= high) {
            if (a[mid] == 1) {
                mid++;
            }
            else if (a[mid] == 0) {
                swap(a[mid], a[low]);
                low++;
                mid++;
            }
            else {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
    
};
