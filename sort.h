#ifndef _SORT_H
#define _SORT_H
#include"header.h"
#include "sach.h"
void themds();
	int n=0;
	sach s1[100];
	void swap (sach &a,sach &b){
	sach temp=a;
		a=b;
		b=temp;
	}
void takeData(){
	ifstream infile;

	char data[100];
	infile.open("list.dat",ios::in);
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
			 infile.close();
}
void SelectionSort(int b)
{
	takeData();
	switch (b)
	{
	case 0:
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n - 1; j++)
			{
				if (strcmp(s1[i].getMasach(), s1[j].getMasach()) == 1)
				{
					swap(s1[i], s1[j]);
				}
			}
		break;

	case 1:
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n - 1; j++)
			{
				if (strcmp(s1[i].getTensach(), s1[j].getTensach()) == 1)
				{
					swap(s1[i], s1[j]);
				}
			}
		break;
	case 2:
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n - 1; j++)
			{
				if (strcmp(s1[i].getNhaxb(), s1[j].getNhaxb()) == 1)
				{
					swap(s1[i], s1[j]);
				}
			}
		break;
	case 3:
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n - 1; j++)
			{
				if (strcmp(s1[i].getNamxb(), s1[j].getNamxb()) == 1)
				{
					swap(s1[i], s1[j]);
				}
			}
		break;
	}
	themds();
}

//void InsertionSort(int b)
//{
//	switch (b)
//	{
//	case 0:
//		for (int i = 1; i < n; i++)
//		{
//			int x = data_list[i];
//			int j = i;
//			while (j > 0 && strcmp(ds.data[data_list[j - 1]].code, ds.data[x].code) == 1)
//			{
//				s1[j] = data_list[j - 1 ];
//				j--;
//			}
//			data_list[ j] = x;
//		}
//		break;
//	case 1:
//		for (int i = 1; i < n; i++)
//		{
//			int x = data_list[i];
//			int j = i;
//			while (j > 0 && strcmp(ds.data[data_list[j - 1]].name, ds.data[x].name) == 1)
//			{
//				s1[j] = data_list[j - 1 ];
//				j--;
//			}
//			data_list[ j] = x;
//		}
//		break;
//	case 2:
//		for (int i = 1; i < n; i++)
//		{
//			int x = data_list[i];
//			int j = i;
//			while (j > 0 && strcmp(ds.data[data_list[j - 1]].loai, ds.data[x].loai) == 1)
//			{
//				s1[j] = data_list[j - 1 ];
//				j--;
//			}
//			data_list[ j] = x;
//		}
//		break;
//	case 3:
//		for (int i = 1; i < n; i++)
//		{
//			int x = data_list[i];
//			int j = i;
//			while (j > 0 && strcmp(ds.data[data_list[j - 1]].donvi, ds.data[x].donvi) == 1)
//			{
//				s1[j] = data_list[j - 1 ];
//				j--;
//			}
//			s1[j] = x;
//		}
//		break;
//	}
//}

//void BubbleSort(int b)
//{
//	switch (b)
//	{
//	case 0:
//		for (int i = 0; i < n; i++)
//			for (int j = n - 1; j > i; j--)
//			{
//				if (strcmp(s1[i].getMasach(), s1[j].getMasach()) == 1)
//					swap(data_list[i], s1[j]);
//			}
//		break;
//	case 1:
//		for (int i = 0; i < n; i++)
//			for (int j = n - 1; j > i; j--)
//			{
//				if (strcmp(ds.data[data_list[i]].name, ds.data[s1[j]].name) == 1)
//					swap(data_list[i], s1[j]);
//			}
//		break;
//	case 2:
//		for (int i = 0; i < n; i++)
//			for (int j = n - 1; j > i; j--)
//			{
//				if (strcmp(ds.data[data_list[i]].loai, ds.data[s1[j]].loai) == 1)
//					swap(data_list[i], s1[j]);
//			}
//		break;
//	case 3:
//		for (int i = 0; i < n; i++)
//			for (int j = n - 1; j > i; j--)
//			{
//				if (strcmp(ds.data[data_list[i]].donvi, ds.data[s1[j]].donvi) == 1)
//					swap(data_list[i], s1[j]);
//			}
//		break;
//	}
//}
//void QuickSort(int l, int r, int b)
//{
//	srand(time(NULL));
//	thietbi key = ds.data[data_list[l + rand() % (r - l + 1)]];
//	int i = l, j = r;
//	while (i <= j)
//	{
//
//		switch (b)
//		{
//		case 0:
//			while (strcmp(ds.data[data_list[i]].name, key.name) == -1) i++;
//			while (strcmp(ds.data[s1[j]].name, key.name) == 1) j--;
//			if (i <= j)
//			{
//				if (i < j)
//					swap(data_list[i], s1[j]);
//				i++;
//				j--;
//			}
//			break;
//
//		case 1:
//			while (strcmp(s1[i].getMasach(), key.code) == -1) i++;
//			while (strcmp(s1[j].getMasach(), key.code) == 1) j--;
//			if (i <= j)
//			{
//				if (i < j)
//					swap(data_list[i], s1[j]);
//				i++;
//				j--;
//			}
//			break;
//
//		case 2:
//			while (strcmp(ds.data[data_list[i]].loai, key.loai) == -1) i++;
//			while (strcmp(ds.data[s1[j]].loai, key.loai) == 1)j--;
//			if (i <= j)
//			{
//				if (i < j)
//					swap(data_list[i], s1[j]);
//				i++;
//				j--;
//			}
//			break;
//		case 3:
//			while (strcmp(ds.data[data_list[i]].donvi, key.donvi) == -1) i++;
//			while (strcmp(ds.data[s1[j]].donvi, key.donvi) == 1)j--;
//			if (i <= j)
//			{
//				if (i < j)
//					swap(data_list[i], s1[j]);
//				i++;
//				j--;
//			}
//			break;
//		}
//	}
//	if (l < j) QuickSort(l, j, b);
//	if (i < r) QuickSort(i, r, b);
//}
//void sort(int a, int b)
//{
//	takeData();
//	switch (a)
//	{
//	case 0: SelectionSort(b);
//	case 1: InsertionSort(b);
//	case 2: BubbleSort(b);
//	case 3: QuickSort(0, n - 1, b);
//	}
//	sorted[0] = 0;
//	sorted[1] = 0;
//	sorted[2] = 0;
//	sorted[3] = 0;
//	sorted[b] = 1;
//	int msgboxID = MessageBox(NULL, "      DA SAP XEP XONG", "THONG BAO", MB_OK);
//	if  (msgboxID == IDOK) return;
//}
void themds(){
	ofstream outfile;
	char data[100];
	system("color 07");
	outfile.open("list.txt",ios::trunc);
	for(int i=0;i<n;i++){
		outfile<<s1[i].getMasach()<<endl;
		outfile<<s1[i].getTensach()<<endl;
		outfile<<s1[i].getNhaxb()<<endl;
		outfile<<s1[i].getNamxb()<<endl;
		outfile<<s1[i].getSotrang()<<endl;
		outfile<<s1[i].getTacgia()<<endl;
		outfile<<s1[i].getGia()<<endl;
	}
	outfile.close();
}
#endif
