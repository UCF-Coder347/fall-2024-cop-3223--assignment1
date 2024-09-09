#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
	
	int main(int argc, char **argv) {
		
	// Calculating the distance
		double calculateDistance();
		 float x1, x2, y1, y2, distance;
			printf("Enter values to determine the distance between two points \n");
			printf("x1 : \n");
			scanf("%f" , &x1);
			printf("x2 : \n");
			scanf("%f" , &x2);
			printf("y1 : \n");
			scanf("%f" , &y1);
			printf("y2 : \n");
			scanf("%f" , &y2);
			printf("\n");
			
distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
			printf("Point #1 entered: x1= %f \t", x1);
			printf("y1= %f \t", y1);
			printf("\n");
			printf("Point #2 entered: x2= %f \t", x2);
			printf("y2= %f \t", y2);
			printf("\n");

			printf("The distance between the two points are: %lf", distance);
    		printf("\n");
			printf("\n");

	// Calculating the area
 		double calculateArea();
		float area;	
		printf("Point #1 entered: x1= %f \t", x1);
			printf("y1= %f \t", y1);
			printf("\n");
			printf("Point #2 entered: x2= %f \t", x2);
			printf("y2= %f \t", y2);
			printf("\n");
		area = M_PI * distance;
		printf("The area of the city encompassed by your request is %lf", area);
		printf("\n");
		printf("\n");

	// Calculating the perimeter
		double calculatePerimeter();
		float perimeter;
		printf("Point #1 entered: x1= %f \t", x1);
			printf("y1= %f \t", y1);
			printf("\n");
			printf("Point #2 entered: x2= %f \t", x2);
			printf("y2= %f \t", y2);
			printf("\n");
		perimeter = 2 * M_PI *distance;
		printf("The perimeter of the city encompassed by your request is %lf", perimeter);
		printf("\n");
		printf("\n");

	// Calculating the width
		double calculateWidth();
		float width;
		printf("Point #1 entered: x1= %f \t", x1);
			printf("y1= %f \t", y1);
			printf("\n");
			printf("Point #2 entered: x2= %f \t", x2);
			printf("y2= %f \t", y2);
			printf("\n");	
		width = (x2 - x1);
		printf("The width of the city encompassed by your request is %lf", width);
		printf("\n");
		printf("\n");


	// Calculating the height
		double calculateHeight();
		float height;	
		printf("Point #1 entered: x1= %f \t", x1);
			printf("y1= %f \t", y1);
			printf("\n");
			printf("Point #2 entered: x2= %f \t", x2);
			printf("y2= %f \t", y2);
			printf("\n");
		height = (y2 - y1);
		printf("The height of the city encompassed by your request is %lf", height);
		printf("\n");
		printf("\n");
		

		return 0;
	}