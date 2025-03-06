/*Find factorial using recursion*/


#include <stdio.h>

int rec(int x){
    if (x>=1){
        return x * rec(x-1);
    } else{
        return 1;
    }
}

int main(){
    int n = 5;
    int fact = rec(n);
    printf("%d", fact);
    return 0;
}
