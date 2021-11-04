#include<iostream>
#include<windows.h>
#include "dohoa.h"
#include<conio.h>
#include<cstdlib>
using namespace std;
void ChucNang(int i){
	if(i==1){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      1. Nhap danh sach sinh vien            "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==2){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      2. Xuat danh sach sinh vien            "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==3){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      3. Them sinh vien                      "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==4){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      4. Sua thong tin sinh vien             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==5){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      5. Xoa sinh vien                       "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==6){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      6. Tim kiem SV theo ten                "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==7){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      7. Tim kiem SV theo MSV                "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==8){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      8. Sap xep theo ten                    "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==9){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      9. Sap xep theo DTB                    "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==10){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      10. Loc cac SV bi canh bao hoc tap     "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==11){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      11. Ghi vao file St.txt                "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	else if(i==12){
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		cout<<"\t\t\t\t\t\t\t\t      12. Thoat chuong trinh                 "<<endl;
		cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
		}
	}
void MainMenu(int tt){
	textcolor(63);
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
	cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
	cout<<"\t\t\t\t\t\t\t\t       CHUONG TRINH QUAN LI SINH VIEN        "<<endl;
	cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
	cout<<"\t\t\t\t\t\t\t\t                                             "<<endl;
	
	textcolor(15);
	for (int i=1; i<=12; i++){
			if(i==tt){
				textcolor(31);
				ChucNang(i);
				textcolor(15);
			}
			else{
				ChucNang(i);
			}
		}
	}
int main(){
	char c;
	char *s;
	int tt=1;
	while(1){
		resizeConsole(1300, 800);
		system("cls");
		MainMenu(tt);
		c=getch();
			if( c==72 ){
				if(tt!=1)
					tt--;
			}
			if( c==80 ){
				if(tt!=12)
					tt++;
			}
			if( c==13 ){
			switch(tt){
				case 1:	
					system("cls");
					cout<<"Chuc nang 1!"<<endl;
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();				
					break;
				case 2:
					system("cls");
					cout<<"Chuc nang 2!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 3:
					system("cls");
					cout<<"Chuc nang 3!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 4:
					system("cls");
					cout<<"Chuc nang 4!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 5:
					system("cls");
					cout<<"Chuc nang 4!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 6:
					system("cls");
					cout<<"Chuc nang 4!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 7:
					system("cls");
					cout<<"Chuc nang 4!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 8:
					system("cls");
					cout<<"Chuc nang 4!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 9:
					system("cls");
					cout<<"Chuc nang 4!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 10:
					system("cls");
					cout<<"Chuc nang 4!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 11:
					system("cls");
					cout<<"Chuc nang 4!";
					cout<<"Nhan phim bat ki de tiep tuc!";
					getch();
					break;
				case 12:
					system("cls");
					cout<<"Xac nhan thoat chuong trinh!"<<endl;
					cout<<"Esc: Huy bo    ||    Enter: Thoat";
					char cf=getch();
					if (cf==27)
						break;
					else if(cf==13)
						return 0;
				}
			}
	}
}

