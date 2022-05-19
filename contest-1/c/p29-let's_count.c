#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    int a[100];
    int pc=0,nc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            pc=pc+1;
        }
        else if(a[i]<0){
            nc=nc+1;
        }
    }
    printf("%d %d",pc,nc);
    return 0;
}
