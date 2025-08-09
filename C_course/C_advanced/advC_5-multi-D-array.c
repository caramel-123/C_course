// MULTIDIMENSIONAL ARRAY

#include <stdio.h>

int main() {
// [] - first bracket is array or row
// [] - second bracket is column 

//                    1st array | 2nd array
    int arr[2][3] = {{1, 3, 5} , {2, 4, 6}};
/*
    printf("%d", arr[0][1]);


*/
    for(int i = 0; i < 2; ++i){
       for(int j=0; j<3; ++j) {
           printf("%d", arr[i][j]);
       }
       printf("\n");
   }
    
    
    
    
    return 0;
}