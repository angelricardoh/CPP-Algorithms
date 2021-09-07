#include <iostream>
#include <string>
using namespace std;

void getCofactor(int ** mat, int ** temp, int p,
                 int q, int n)
{
    int i = 0, j = 0;
 
    // Looping for each element of the matrix
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
 
                // Row is filled, so increase row index and
                // reset col index
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
 
int determinantOfMatrix(int ** mat, int N)
{
    int D = 0; // Initialize result
 
    //  Base case : if matrix contains single element
    if (N == 1) {
        return mat[0][0];
    }
 
    int** temp = new int*[N];
    for (int i = 0; i < N; ++i) {
        temp[i] = new int[N];
    }

    int sign = 1; // To store sign multiplier
 
    for (int f = 0; f < N; f++)
    {
        // Getting Cofactor of mat[0][f]
        getCofactor(mat, temp, 0, f, N);
        D += sign * mat[0][f] * determinantOfMatrix(temp, N - 1);
 
        // terms are to be added with alternate sign
        sign = -sign;
    }
 
    return D;
}
string MatrixChallenge(string strArr[], int arrLength) {
  
    // code goes here  
    int N;
    for (int a = 0; a < arrLength; a+=1) {
        if (strArr[a] == "<>") {
            N = a;
            break;
        }
    }

    int ** matrix = new int*[N];
    for (int i = 0; i < N; ++i){
        matrix[i] = new int[N];
    }
    int i = 0;
    int j = 0;
    for (int a = 0; a < arrLength; a+=1) {
        if (strArr[a] == "<>") {
            i += 1;
            j = 0;
        } else {
            matrix[i][j] = stoi(strArr[a]);
            j++;
        }
    }

      // output each array element's value
      // for (int i = 0; i < N; i++)
      // {
      //     for (int j = 0; j < N; j++)
      //     {
      //         cout << "Element at matrix[" << i
      //              << "][" << j << "]: ";
      //         cout << matrix[i][j]<<endl;
      //     }
      // }

    cout << determinantOfMatrix(matrix, N) << endl;

    return strArr[0];

}

int main(void) { 
   
    // keep this function call here
    // string A[] = coderbyteInternalStdinFunction(stdin);
    string A[] = {"5", "0", "<>", "0", "5"};
    int arrLength = sizeof(A) / sizeof(*A);
    MatrixChallenge(A, arrLength);
    string B[] = {"1", "2", "4", "<>", "2", "1", "1", "<>", "4", "1", "1"};
    int arrLengthB = sizeof(B) / sizeof(*B);
    MatrixChallenge(B, arrLengthB);
    return 0;
    
}