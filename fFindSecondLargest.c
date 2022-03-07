class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int largest = arr[0];
	    int SecLargest = -1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>largest)
	        {
	            SecLargest = largest;
	            largest = arr[i];
	        }
	        else if(arr[i] > SecLargest && arr[i]!=largest)
	        {
	            SecLargest = arr[i];
	        }
	    }
	    return SecLargest;
	    
	}
};