#include <stdio.h>

int main()
{
    int x,y;
    int w,h;
    int l=0;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    while (1){
        if (x-l==0 || x+l==w || y-l==0 || y+l==h) {
            printf("%d",l);
            break;
        }
        l++;
    }
}
