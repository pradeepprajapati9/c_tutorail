#include <stdio.h>

int main(){
// basically loop is used to iterate over an array or object.
// a loop is a sequence of commands s that is continually repeated until a certain condition is reached.

// for loop

// print 1-10;

for(int i=0;i<=10; i++){
    printf(" for loop 1-10 %d\n",i);
}

// while loop

int j=0;
while (j<=10)
{
    printf("while loop 1-10%d\n",j);
    j++;
}

// do while loop
int x=0;
do{
    x++;
    printf("do while loop 1-10%d\n",x);
}while(x<=10);


// break and continue

for(int y=0; y<50 ;y++){
    if(y==20){
        break;
    }
    printf("%d\n",y);
}

for(int k=0; k<10 ;k++){
    if(k==5){
        continue;;
    }
    printf("%d\n",k);
}

    return 0;
}