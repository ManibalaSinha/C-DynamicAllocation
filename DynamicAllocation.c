//Dynamic allocation allows building complex data structures such as linked lists.
//Allocating memory dynamically helps us to store data without initially knowing the size of the data in the time
#include <stdio.h>

typedef struct {
	int x;
	int y;
} point;// dynamically allocate point strcuture

int main() {
	point * mypoint;// to allocate new point

	mypoint = malloc(sizeof(point)); // to allocate new point, we use this syntax

	mypoint->x = 10;//To access the point's members, we can use the -> notation:
	mypoint->y = 5;
	printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

	free(mypoint);//After using the dynamically allocated struct, we can release it using free:
	return 0;
}