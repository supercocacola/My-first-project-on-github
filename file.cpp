#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Congdan{
	public:
		int ID;
		string name;
	public:
		
		Congdan(int ID,string name);
		void nhap();
		void xuat();
};
Congdan::Congdan(int ID,string name){
	this->ID=ID;
	this->name=name;
}
void Congdan::nhap(){
	cout << "Moi nhap ID:" ;
	cin >> ID ;
	cout << "Moi nhap ho ten: " ;
	cin.ignore();
	getline(cin,name);
}
void Congdan::xuat(){
	cout << ID;
	cout << name;
}

class Sinhvien:virtual public Congdan{
	private :
		string nganh;
	public:
		Sinhvien(int ID,string name,string nganh):Congdan(ID,name),nganh(nganh){} //gan cho nganh bang cach nganh(nganh)
		void nhap();
		void xuat();
};
void Sinhvien::nhap(){
	Congdan::nhap();
	cout<<"Nhap chuyen nganh";
	getline(cin,nganh);
}
void Sinhvien::xuat(){
	Congdan::xuat();
	cout<<"chuyen nganh"<<nganh;
}
class Giaovien:virtual public Congdan{
	private :
		string khoa;
	public:
		Giaovien ( int ID,string name,string khoa):Congdan(ID,name),khoa(khoa){} 
		void nhap();
		void xuat();
};
void Giaovien::nhap(){
	Congdan::nhap();
	cout<<"Nhap khoa";
	getline(cin,khoa);
}
void Giaovien::xuat(){
	Congdan::xuat();
	cout<<"chuyen khoa"<<khoa;
}
class Svch:virtual public Giaovien{
	private :
		string mach;
	public:
		Svch ( int ID,string name,string khoa,string mach):Giaovien ( int ID,string name,string khoa),mach(mach){} 
		void nhap();
		void xuat();
};
void Svch::nhap(){
	Giaovien::nhap();
	cout<<"Nhap ma ch";
	cin>>mach;
	
}
void Svch::xuat(){
	Giaovien::xuat();
	cout<<"ma ch"<<mach;
int main()
{
Giaovien gv(0," "," ");
//gv.nhap();
cout<<gv.ID;
gv.xuat();
return 0;
}
