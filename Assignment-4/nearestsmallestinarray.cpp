#include <iostream> 
using namespace std; 
void printPrevSmaller(int arr[], int n) 
{ 
    cout << "_, "; 
      for (int i=1; i<n; i++) 
    {        
        int j; 
        for (j=i-1; j>=0; j--) 
        { 
            if (arr[j] < arr[i]) 
            { 
                cout << arr[j] << ", "; 
                break; 
            } 
        } 
  
        if (j == -1) 
        cout << "_, " ; 
    } 
} 
  
int main() 
{ 
    int arr[] = {1, 3, 0, 2, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printPrevSmaller(arr, n); 
    return 0; 
}