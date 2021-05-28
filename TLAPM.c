#include <stdio.h>

int val(int r,int c){
    int s = c +r -2;
    return (s*(s+1))/2+r;
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        int path =0;
        for(int x=x1; x<=x2; x++){

            path+=val(x, y1);
        }

        for(int y=y1+1; y<=y2; y++){

            path+=val(x2, y);
        }

        printf("%d\n", path);
    }
	return 0;
}
