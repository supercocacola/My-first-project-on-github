#ifndef _GIAODIEN_H
#define _GIAODIEN_H
#include "header.h"

void ChangeTeCol(int k) {
	
    HANDLE hConsoleColor;
    
    hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE); 
    
        SetConsoleTextAttribute(hConsoleColor, k);
        
}
void gotoxy(int column, int line)
 
{
 
    COORD coord;
 
    coord.X = column;
 
    coord.Y = line;
 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 
}

void ke_ngang(int x, int y, int l){
	
	for(int i=0 ;i<l;i++){
		gotoxy(x+i,y);
		cout<<"_";
//		Sleep(5);
	}
}
void ke_doc(int x, int y, int h){
	
	for(int i=0;i<h;i++){
		gotoxy(x,y+i+1);
		cout<<"|";
//		Sleep(5);
	}
		
}
void vebang(int x,int y,int l,int h,string s){
	ke_ngang(x+1,y,l-1);
	ke_ngang(x,y+h,l);
	ke_doc(x,y,h);
	ke_doc(x+l,y,h);
	gotoxy(x+1,y+1);
	cout<<s;
}
void khung(){
vebang(0,0,110,25,"");
gotoxy(1,1);
cout<<"Hoc vien ky thuat quan su";
gotoxy(60,1);
cout<<"Pham Viet Anh KHMT 15-3";
const char *s="MENU QUAN LY SACH";
gotoxy(55-strlen(s)/2,3);
cout<<s;
ke_ngang(1,4,108);
}
#endif
