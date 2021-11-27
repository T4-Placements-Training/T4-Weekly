//geeksforgeeks
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int mergeAndCount(long long arr[], long long low, long long mid, long long high) {
        long long int n1 = mid-low+1;
        long long int n2 = high-mid;
        long long int arr1[n1];
        long long int arr2[n2];
        long long int count = 0;  
        for (long long int i = 0;i < n1;i++) {     
            arr1[i] = arr[low+i];
        }
        for (long long int i = 0;i < n2;i++) {
            arr2[i] = arr[mid+1+i];
        }
        long long int i = 0, j = 0, k = low; 
        while (i < n1 && j < n2) {
            if (arr1[i] <= arr2[j]) {
                arr[k] = arr1[i];
                i++;
            }
            else {
                count = count + n1 - i;
                arr[k] = arr2[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        while (j < n2) {
            arr[k] = arr2[j];
            k++;
            j++;
        }
        return count;
    }
    long long int mergeSort(long long arr[], long long low, long long high) {
        long long int inversionCount = 0; 
        if (low < high) {
            long long int mid = (low + high)/2;  
            inversionCount += mergeSort(arr, low, mid); 
            inversionCount += mergeSort(arr, mid+1, high); 
            inversionCount += mergeAndCount(arr, low, mid, high); 
        }
        return inversionCount;      
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSort(arr, 0, N-1);
    }

};
