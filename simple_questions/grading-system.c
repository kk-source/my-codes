#include <stdio.h>

int main() {
	int d;
	puts("Enter the marks obtained by you out of 500");
	scanf("%d", &d);
	if (d<=500 && d>=450){
		puts("You have secured 'A' grade.");
	}
	else if (d<450 && d>=400){
		puts("You have secured 'B' grade.");
	}
	else if (d<400 && d>=350){
		puts("You have secured 'C' grade.");
	}
	else if (d<350 && d>=250){
		puts("You have secured 'D' grade.");
	}
	else if (d<250 && d>=150){
		puts("You have secured 'E' grade.");
	}
	else if (d<150 && d>=0){
		puts("You have secured 'F' grade.");
		
	}
	else {
		puts("You have entered invalid input");
	}
	return 0;
}
