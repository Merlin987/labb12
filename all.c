#include <stdio.h>
void order_pair(int *a, int*b){
    if (*a>*b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(void) {
    int x=7, y = 4;
    order_pair(&x, &y);
    printf("%d %d\n", x , y);
    return 0;
    
    

}

