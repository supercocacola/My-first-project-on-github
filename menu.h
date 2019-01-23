#ifndef _MENU_H
#define _MENU_H
#include"header.h"
#include "sach.h"
#include "sort.h"


class Menu {
 
    public:
 
        Menu();
 
   		 ~Menu() {}
 
    void printMenu();
 
    void deleteMenu(); //Xóa menu khi k?t thúc chuong trình b?ng cách vi?t dè kí t? tr?ng
 
    int numberOfItem() {
        return _numberOfItem;
    }
 
    string * getItem() {
        return item;
    }
    
    
 
    private:
 
        string * item; //M?ng luu tên c?a các menu
 
    int _numberOfItem; //S? lu?ng menu
 
};
 
Menu::Menu() {
 
    item = new string[100];
 
    _numberOfItem = 6;
 
    item[0] = "1.Cap nhat danh sach";
 
    item[1] = "2.In danh sach";
 
    item[2] = "3.Sap xep";
 
    item[3] = "4.Tim kiem";
    item[4] = "5.Thong ke";
    item[5] = "6.Thoat";
 
}
void Menu::printMenu() {

    for ( int i = 0; i < _numberOfItem; i++) {
 		
	
		vebang(1,5+i*3,25,2,item[i]);
 
        Sleep(100); 
 
    }
    ChangeTeCol(4);
    gotoxy(2,6);
    cout<<item[0];
 
}
void Menu::deleteMenu(){
for(int i=27;i<100;i++)  for(int j=5;j<25;j++){gotoxy(i,j);cout<<" ";
}
}
void Cursor(bool x)
{
    CONSOLE_CURSOR_INFO Info;
    Info.bVisible = x;
    Info.dwSize = 20;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
int move() {
 
    char c = getch();
 
    if ((int) c == -32) c = getch();
 
    switch ((int) c) {
 
        case 80:
            return 1; //cout << "Xuong";
 
        case 72:
            return 2; //cout << "Len";
 
        case 77:
            return 3; //cout << "Phai";       
 
        case 75:
            return 4; //cout << "Trai";
 
        case 27:
            return 8; //Nut ESC thoat
 
        case 13:
            return 5; //Nut Enter
 
        default:
            return 0; //cout << "Sai";
 
    }
 
}

void in(){
	ifstream infile;
	int n=0,i=0;
	sach s1[100];
	char data[100];
	infile.open("list.txt",ios::in);
	while(!infile.eof()){
 			infile.getline(data,10);
			s1[n].setMasach(data);
			infile.getline(data,40);
			s1[n].setTensach(data);
			infile.getline(data,40);
			s1[n].setNhaxb(data);
			infile.getline(data,10);
			s1[n].setNamxb(data);
			infile.getline(data,10);
			s1[n].setSotrang(data);
			infile.getline(data,40);
			s1[n].setTacgia(data);
//			infile.getline(data,100);
//			s1[n].setTomtat(data);
			infile.getline(data,10);
			s1[n].setGia(data);
//			infile.getline(data,100);
//			s1[n].setGhichu(data);
			n++;
			 }
 			
 system("cls");
 system("color 07");
 cout<<left<<setw(10)<<"Ma sach"<<setw(30)<<"Ten sach"<<setw(20)<<"Nha xuat ban"<<setw(30)<<"Nam xuat ban"<<setw(10)<<"So trang"<<setw(30)<<"Tac gia"<<setw(15)<<"Gia thanh"<<endl;
 	for(int i=0;i<n;i++){
	vebang(0,2+i*3,10,2,ChartoString(s1[i].getMasach()));
 	vebang(10,2+i*3,30,2,ChartoString(s1[i].getTensach()));
 	vebang(40,2+i*3,20,2,ChartoString(s1[i].getNhaxb()));
 	vebang(60,2+i*3,30,2,ChartoString(s1[i].getNamxb()));
 	vebang(90,2+i*3,10,2,ChartoString(s1[i].getSotrang()));
// 	vebang(100,2+i*3,30,2,ChartoString(s1[i].getTacgia()));
// 	vebang(141,2+i*3,8,2,ChartoString(s1[i].getTomtat()));
// 	vebang(130,2+i*3,15,2,ChartoString(s1[i].getGia()));
// 	vebang(196,2+i*3,8,2,ChartoString(s1[i].getGhichu()));

}
infile.close();
 }		


void xuly(){
	sach s;
	bool thoat=false;
	int dk;
	int x=2,y=6,z=0;
	Menu menu;
	while (!thoat) {
 
        if (kbhit()) {
 
            dk = move();
 
            switch (dk) {
 
                case 1:{
                	y=y+3;if(y>21)y=6;
					break;
				}
                	
                case 2:{
                	y=y-3;if(y<6)y=21;
					break;
				}
				case 3:{
					x=x+26;z=((y-6)/3)+1;y=6;
					break;
				}
 
                case 4:{
                	x=2;y=6;z=0;
                	menu.deleteMenu();
					break;
				}
                    
                case 5:{
                	if(x==28&&y==6&&z==1) {system("cls");s.them();exit(0);
					}
					if(x==2&&y==9&&z==0) { system("cls");in();
					}
					if(x==28&&y==6&&z==3){SelectionSort(0);system("cls");cout<<"Da sap xep xong!";}
					goto NEXT;
					break;
				}
                    
                case 8:
 
                    thoat = true;
 					
            }
           system("color 07");
if(x==2&&z==0){
gotoxy(x,y);
ChangeTeCol(4);
cout<<menu.getItem()[(y-6)/3];}
if(x==28&&z==1){vebang(27,5,25,2,"Nhap");vebang(27,8,25,2,"Sua");vebang(27,11,25,2,"Xoa");
	if(y>12) y==6;
	if(y<6) y==12;
	if(y==6) {ChangeTeCol(4);vebang(27,5,25,2,"Nhap");}
	if(y==9) {ChangeTeCol(4);vebang(27,8,25,2,"Sua");}
	if(y==12) {ChangeTeCol(4);vebang(27,11,25,2,"Xoa");}

	}

if(x==28&&z==3){vebang(27,8,25,2,"Chen");vebang(27,11,25,2,"Noi bot");vebang(27,5,25,2,"Chon");
	if(y==6){ChangeTeCol(4);vebang(27,5,25,2,"Chon");}
	if(y==9) {ChangeTeCol(4);vebang(27,8,25,2,"Chen");}
	if(y==12) {ChangeTeCol(4);vebang(27,11,25,2,"Noi bot");}	
}
	

NEXT:;	
}
}
}


#endif
