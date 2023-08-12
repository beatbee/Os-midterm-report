/*
    Task	: memory
    Author	: Belle
    School	: Kasetsart University
    Language	: C
    Created	: 12 August 2023 [15:30]
    Algo	: 
    Status	: 
*/
#include<stdio.h>
#include<stdlib.h>
void stack(int b){
    if(b < 3){
        printf("Stack l=%d: %p\n", b, &b);
        stack(b+1);
    }

}
int* a[3];
void heap(int c){
    for(int i=0; i<c; i++){
        a[i] = (int*)malloc(sizeof(int));
        printf("Heap l=%d: %p\n", i, a[i]);
    }
    for(int i=0; i<c; i++){
        free(a[i]);
    }
    
}

void overflow(long long of){
    long long over[1000];
    printf("Overflowl=%lld: %p\n",of, over);
    overflow(of+1);
}
int global1 = 1;
int global2 = 2;
int global3 = 3;
int main(){
    int ch;
    scanf("%d", &ch);
    if(ch == 1){
        overflow(0);
    }
    else{ 
    printf("global1: %p\n", &global1);
    printf("global2: %p\n", &global2);
    printf("global3: %p\n", &global3);
    stack(0);
    heap(3);
    }
    return 0;
}