#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ArrayChallenge(int arr[], int arrLength) {
  
    // code goes here  
    int result[arrLength - 1];
    int k = 0;
    int N = arr[0];

    for (int i=1; i<arrLength; i++){

        vector <int> unsortedArray;
        int window = i - N;
        if (window <= 0) {
        window = 0;
        }
        for (int j=i; j>window; j--) {
        unsortedArray.insert(unsortedArray.begin(), arr[j]);
        }
        sort(unsortedArray.begin(), unsortedArray.end());

        // showlist(unsortedArray);
        int size = unsortedArray.size();
        if (size % 2 == 0) {
        result[k] = (unsortedArray[size / 2 - 1] + unsortedArray[size / 2]) / 2;
        } else {
        result[k] = unsortedArray[size / 2];
        }
        k++;
    }
    
    for (int i=0; i<arrLength - 1; i++){
        if (i == arrLength - 2){
        cout << result[i];
        } else {
        cout << result[i] << ',';
        }
    }

    return arr[0];
}

int main(void) { 
   
  // keep this function call here
//   int A[] = coderbyteInternalStdinFunction(stdin);
    int A[] = {3, 1, 3, 5, 10, 6, 4, 3, 1};

    // First element window 3
    // First median of 1
    // Second median of 1 and 3
    // Third median of 1, 3 and 5
    // Fourth median of 3, 5 and 10
    // and so on

    int arrLength = sizeof(A) / sizeof(*A);
    ArrayChallenge(A, arrLength);
    return 0;
    
}