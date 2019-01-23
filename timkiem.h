#ifndef _TIMKIEM_H
#define _TIMKIEM_H
#include "header.h"
#include "sort.h"
#include "giaodien.h"
void search(int a, int b)
{
	takeData();
	string ketqua[100], j = 0;
	for (int i = 0; i < 20; i++)
	{
		ketqua[i] = -1;
	}
	if (a == 0)
	{
		gotoxy(1, 5); cout<<"TIM KIEM";
		gotoxy(1, 6); cout<<"Nhap tu khoa:";
		char info[255];
		cin.getline(info,255);
		switch (b)
		{
		case 0:
			for (int i = 0; i < n; i++)
			{
				if (strstr(s1[i].getMasach(), info) != NULL)
				{
					ketqua[j] =s1[i].getMasach();
					j++;
				}
			}
			break;
		case 1:
			for (int i = 0; i < n; i++)
			{
				if (strstr(s1[i].getTensach(), info) != NULL)
				{
					ketqua[j] = s1[i].getTensach;
					j++;
				}
			}
			break;
		case 2:
			for (int i = 0; i < n; i++)
			{
				if (strstr(s1[i].getNhaxb(), info) != NULL)
				{
					ketqua[j] = s1[i].getNhaxb;
					j++;
				}
			}
			break;
		case 3:
			for (int i = 0; i < n; i++)
			{
				if (strstr(s1[i].getNamxb(), info) != NULL)
				{
					ketqua[j] = s1[i].getNamxb();
					j++;
				}
			}
			break;
		}

		if (ketqua[i] != -1)
		{
			system("cls");
			cout<<"              Ket qua tim kiem              "<<endl;
			for(int i=0;i<j;i++) vebang(1,1+2*i,50,3,ketqua[i]);
			
			
		}
		else
		{
			
			int msgboxID = MessageBox(NULL, "KHONG TIM DUOC GIA TRI NAO CA", "THONG BAO", MB_OK);
			if  (msgboxID == IDOK) return;
		}
	}

//	if (a == 1)
//	{
//
//		if (!sorted[b])
//		{
//			int msgboxID = MessageBox(NULL, "DANH SACH CHUA DUOC SAP XEP", "THONG BAO", MB_OK);
//			if  (msgboxID == IDOK) return;
//			return;
//		}
//		int *backup_data_list = data_list;
//		Cursor(1);
//		setcolor(11, 0);
//		drbd(85, 3, 2, 60);
//		drbd(105, 2, 1, 20);
//		gotoxy(106, 3); printf("      TIM KIEM      ");
//		gotoxy(88, 5); printf("Nhap tu khoa: ");
//		char info[255];
//		fflush(stdin);
//		gets(info);
//		// strcat(info, "\n");
//		int tmp = 0;
//		int mid ;
//		int left = 0, right = ds.length - 1;
//		switch (b)
//		{
//
//		case 0:
//			while (left <= right) {
//				mid = (left + right) / 2;
//				if (strstr(ds.data[data_list[mid]].name, info))
//				{
//					result.data[tmp] = ds.data[data_list[mid]];
//					data_list[tmp] = tmp;
//					tmp++;
//					for (int i = mid - 1; i >= 0; i--)
//					{
//						if (strstr(ds.data[data_list[i]].name, info))
//						{
//							result.data[tmp] = ds.data[data_list[i]];
//							data_list[tmp] = tmp;
//							tmp++;
//						}
//						else
//							break;
//					};
//					for (int i = mid + 1; i < ds.length; i++)
//					{
//						if (strstr(ds.data[data_list[i]].name, info))
//						{
//							result.data[tmp] = ds.data[data_list[i]];
//							data_list[tmp] = tmp;
//
//							tmp++;
//						}
//						else
//							break;
//					};
//					break;
//				}
//				if (strcmp(ds.data[data_list[mid]].name, info) == 1) right = mid - 1;
//				if (strcmp(ds.data[data_list[mid]].name, info) == -1) left = mid + 1;
//			} break;
//		case 1:
//			while (left <= right) {
//				mid = (left + right) / 2;
//				if (strstr(ds.data[data_list[mid]].code, info))
//				{
//					result.data[tmp] = ds.data[data_list[mid]];
//					data_list[tmp] = tmp;
//					tmp++;
//					for (int i = mid - 1; i >= 0; i--)
//					{
//						if (strstr(ds.data[data_list[i]].code, info))
//						{
//							result.data[tmp] = ds.data[data_list[i]];
//							data_list[tmp] = tmp;
//
//							tmp++;
//						}
//						else
//							break;
//					};
//					for (int i = mid + 1; i < ds.length; i++)
//					{
//						if (strstr(ds.data[data_list[i]].code, info))
//						{
//							result.data[tmp] = ds.data[data_list[i]];
//							data_list[tmp] = tmp;
//
//							tmp++;
//						}
//						else
//							break;
//					};
//					break;
//				}
//				if (strcmp(ds.data[data_list[mid]].code, info) == 1) right = mid - 1;
//				if (strcmp(ds.data[data_list[mid]].code, info) == -1) left = mid + 1;
//			} break;
//		case 2:
//			while (left <= right) {
//				mid = (left + right) / 2;
//				if (strstr(ds.data[data_list[mid]].loai, info))
//				{
//					result.data[tmp] = ds.data[data_list[mid]];
//					data_list[tmp] = tmp;
//					tmp++;
//					for (int i = mid - 1; i >= 0; i--)
//					{
//						if (strstr(ds.data[data_list[i]].loai, info))
//						{
//							result.data[tmp] = ds.data[data_list[i]];
//							data_list[tmp] = tmp;
//
//							tmp++;
//						}
//						else
//							break;
//					};
//					for (int i = mid + 1; i < ds.length; i++)
//					{
//						if (strstr(ds.data[data_list[i]].loai, info))
//						{
//							result.data[tmp] = ds.data[data_list[i]];
//							data_list[tmp] = tmp;
//
//							tmp++;
//						}
//						else
//							break;
//					};
//					break;
//				}
//				if (strcmp(ds.data[data_list[mid]].loai, info) == 1) right = mid - 1;
//				if (strcmp(ds.data[data_list[mid]].loai, info) == -1) left = mid + 1;
//			} break;
//		case 3:
//			while (left <= right) {
//				mid = (left + right) / 2;
//				if (strstr(ds.data[data_list[mid]].donvi, info))
//				{
//					result.data[tmp] = ds.data[data_list[mid]];
//					data_list[tmp] = tmp;
//					tmp++;
//					for (int i = mid - 1; i >= 0; i--)
//					{
//						if (strstr(ds.data[data_list[i]].donvi, info))
//						{
//							result.data[tmp] = ds.data[data_list[i]];
//							data_list[tmp] = tmp;
//
//							tmp++;
//						}
//						else
//							break;
//					};
//					for (int i = mid + 1; i < ds.length; i++)
//					{
//						if (strstr(ds.data[data_list[i]].donvi, info))
//						{
//							result.data[tmp] = ds.data[data_list[i]];
//							data_list[tmp] = tmp;
//
//							tmp++;
//						}
//						else
//							break;
//					};
//					break;
//				}
//				if (strcmp(ds.data[data_list[mid]].donvi, info) == 1) right = mid - 1;
//				if (strcmp(ds.data[data_list[mid]].donvi, info) == -1) left = mid + 1;
//			} break;
//		}
//		if (tmp > 0)
//		{
//			result.length = tmp;
//			printList(result, "TIM KIEM", 1);
//			getch();
//			xoabang(result.length + 1);
//			*data_list = *backup_data_list;
//		}
//		else
//		{
//			xoabang(2);
//			*data_list = *backup_data_list;
//			int msgboxID = MessageBox(NULL, "KHONG TIM DUOC GIA TRI NAO CA", "THONG BAO", MB_OK);
//			if  (msgboxID == IDOK) return;
//		}
//	}
//}
#endif
