#include <iostream> 
#include<unistd.h>
using namespace std; 
  
// maximum size of matrix 
#define MAX 100 
  
// maximum number of threads 

  
int matA[MAX][MAX]; 
int matB[MAX][MAX]; 
int matC[MAX][MAX]; 
int step_i = 0; 
  
void multi() 
{ 
    int core = step_i++; 
 
    // Each thread computes 1/4th of matrix multiplication 
    for (int i = core * MAX / 4; i < (core + 1) * MAX / 4; i++)  
        for (int j = 0; j < MAX; j++)  
            for (int k = 0; k < MAX; k++)  
                matC[i][j] += matA[i][k] * matB[k][j]; 
} 
  
// Driver Code 
int main() 
{ 
    // Generating random values in matA and matB 
    for (int i = 0; i < MAX; i++) { 
        for (int j = 0; j < MAX; j++) { 
            matA[i][j] = rand() % 10; 
            matB[i][j] = rand() % 10; 
        } 
    } 
  
    // Displaying matA 
    cout << endl 
         << "Matrix A" << endl; 
    for (int i = 0; i < MAX; i++) { 
        for (int j = 0; j < MAX; j++)  
            cout << matA[i][j] << " "; 
        cout << endl; 
    } 
  
    // Displaying matB 
    cout << endl 
         << "Matrix B" << endl; 
    for (int i = 0; i < MAX; i++) { 
        for (int j = 0; j < MAX; j++)  
            cout << matB[i][j] << " ";         
        cout << endl; 
    } 
  
   
    // Displaying the result matrix 
    cout << endl 
         << "Multiplication of A and B" << endl; 
    for (int i = 0; i < MAX; i++) { 
        for (int j = 0; j < MAX; j++)  
            cout << matC[i][j] << " ";         
        cout << endl; 
    } 
    return 0; 
} 
