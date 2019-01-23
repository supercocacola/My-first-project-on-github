#include "header.h"
#include "giaodien.h"
#include "menu.h"


int main(){
	Menu menu;
	Cursor(0);
	khung();
	menu.printMenu();
	xuly();
	system("cls");
	return 1;
}
