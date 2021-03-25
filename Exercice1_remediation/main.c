#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Point3D{
	int x;
	int y;
	int z;
};

int main(int argc, char *argv[]) {
	
	int i,j;
	int point;
	int Point3D[49][3];
	
	
	for(i=0;i<50;i++){
		Point3D[i][1] = 0;
        Point3D[i][2] = 0;
        Point3D[i][3] = 0;
	}
	
	for(i=0;i<10;i++){
	    printf("\nPoint %d :\n", i+1);

        printf("\tx = ");
        scanf("%d",&Point3D[i][1]);

        printf("\ty = ");
        scanf("%d",&Point3D[i][2]);

        printf("\tz = ");
        scanf("%d",&Point3D[i][3]);
	}
	
	    for( i=0; i<10; i++){
        printf("\nPoint %d : ",i+1);
        printf("x= %d  y= %d  z= %d  ", Point3D[i][0], Point3D[i][1], Point3D[i][2]);
    }
	
	
	return 0;
}
