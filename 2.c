#include <stdio.h>
int main() {   
	float x[6] = {1.0,2.0,1.0,4.0,3.0,3.0}, y[30] = {0}, z[30];
  for(int i = 0; i <30; i++) z[i] = 0;
  float maxx = x[0];
	for(int i = 0; i < 6; i++){
			z[i] = x[i];
      if(maxx < z[i]) maxx = z[i];
	}
	y[0] = z[0];
float maxy = y[0];
	y[1] = -0.5*y[0]+z[1];
if(maxy < y[1]) maxy = y[0];
	for(int i=2;i<29;i++){
		y[i] = -0.5*y[i-1]+z[i]+z[i-2];
    if(maxy < y[i]) maxy = y[i];
	}
  printf("Given x = { ");
  for(int i = 0; i < 30; i++) {
    printf("%f", z[i]);
    if(i < 29) printf(", ");
  } printf("}\n");
	printf("Upper bound of x(n) is %f\n", maxx);
  printf("y = { ");
  for(int i = 0; i < 30; i++) {
    printf("%f", y[i]);
    if(i < 29) printf(", ");
  } printf("}\n");
	printf("Upper bound of y(n) is %f", maxy);
    return 0;
}