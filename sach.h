#ifndef _SACH_H
#define _SACH_H
#include "header.h"


class sach{
	public:
		sach(){strcpy(masach," ");strcpy(tensach," ");strcpy(nhaxb," ");strcpy(namxb," ");strcpy(sotrang," ");strcpy(tacgia," ");strcpy(gia," ");}
		~sach(){}
		void setMasach(char*);
		void setTensach(char*);
		void setNhaxb(char*);
		void setNamxb(char*);
		void setSotrang(char*);
		void setTacgia(char*);
//		void setTomtat(char*);
		void setGia(char*);
//		void setGhichu(char*);
		char*getMasach();
		char*getTensach();
		char*getNhaxb();
		char*getNamxb();
		char*getSotrang();
		char*getTacgia();
//		char*getTomtat();
		char*getGia();
//		char*getGhichu();
		void them();
		void sua();
		void xoa();
		void in();

		
	protected:
		char masach[40];
		char tensach[40];
		char nhaxb[40];
		char namxb[10];
		char sotrang[10];
		char tacgia[40];
//		char tomtat[100];
		char gia[10];
//		char ghichu[100];

};
void sach::setMasach(char masach[]){
	strcpy(this->masach,masach);
}
void sach::setTensach(char tensach[]){
	strcpy(this->tensach,tensach);
}
void sach::setNhaxb(char nhaxb[]){
	strcpy(this->nhaxb,nhaxb);
}
void sach::setNamxb(char namxb[]){
	strcpy(this->namxb,namxb);
}
void sach::setSotrang(char sotrang[]){
	strcpy(this->sotrang,sotrang);
}
void sach::setTacgia(char tacgia[]){
	strcpy(this->tacgia,tacgia);
}
//void sach::setTomtat(char tomtat[]){
//	strcpy(this->tomtat,tomtat);
//}
void sach::setGia(char gia[]){
	strcpy(this->gia,gia);
}
//void sach::setGhichu(char ghichu[]){
//	strcpy(this->ghichu,ghichu);
//}
char*sach::getMasach(){
	return this->masach;
}
char*sach::getTensach(){
	return this->tensach;
}
char*sach::getNhaxb(){
	return this->nhaxb;
}
char*sach::getNamxb(){
	return this->namxb;
}
char*sach::getSotrang(){
	return this->sotrang;
}
char*sach::getTacgia(){
	return this->tacgia;
}
char*sach::getGia(){
	return this->gia;
}
// ostream &operator << (ostream &out, sach &n ){
//	//out<<left<<setw(10)<<n.getMasach()<<setw(30)<<n.getNhaxb()<<setw(20)<<n.getNamxb()<<setw(10)<<n.getSotrang()<<setw(30)<<n.getTacgia<<setw(40)<<n.getTomtat<<setw(15)<<n.getGiathanh()<<setw(40)<<n.getGhichu<<endl;
//	cout<<n.getMasach;
//	return out;
//}
void sach::them(){
	ofstream outfile;
			char data[100];
			system("color 07");
			outfile.open("list.txt",ios::app);
			cout<<"Nhap ma sach : ";
			cin.getline(data,40);
			outfile<<data<<endl;
			
			cout<<"Nhap ten sach: ";
			cin.getline(data,100);
			outfile<<data<<endl;
			
			cout<<"Nha xuat ban: ";
			cin.getline(data,100);
			outfile<<data<<endl;
			
			cout<<"Nhap nam xuat ban: ";
			cin.getline(data,100);
			outfile<<data<<endl;
			
			cout<<"Nhap so trang: ";
			cin.getline(data,100);
			outfile<<data<<endl;
			
			cout<<"Nhap tac gia: ";
			cin.getline(data,100);
			outfile<<data<<endl;
			
//			cout<<"Nhap tom tat: ";
//			cin.getline(data,100);
//			outfile<<data<<endl;
			
			cout<<"Nhap gia thanh: ";
			cin.getline(data,100);
			outfile<<data<<endl;
			
//			cout<<"Nhap ghi chu: ";
//			cin.getline(data,100);
//			outfile<<data<<endl;
			
			outfile.close();

}

void sach::in(){
	
}

#endif
