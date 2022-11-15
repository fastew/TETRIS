#include "main.h"
int main() {
	int i;
	resetmap(); 
	CursorView();
	title();
	i = getch();
	if (i != NULL) {
		system("cls");
		newblock();
		system("cls");
		drawmap();
		printf("a");
	}

}
