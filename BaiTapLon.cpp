#include<iostream>
#include<windows.h>
#include "dohoa.h"
#include<conio.h>
#include<cstdlib>
#include <fstream>
using namespace std;
using namespace std;
struct DOB{
	int day;
	int month;
	int year;
};
struct Name{
	string Firstname;
	string Lastname;
};
class score{
	private:
		float s_toan, s_tin, s_eng;
	public:
		void NhapS(){
			do{
			cout<<"Nhap diem Toan: ";
			cin>>s_toan;
			}while(s_toan<0&&s_toan>10);
			do{
			cout<<"Nhap diem Tin: ";
			cin>>s_tin;
			}while(s_tin<0&&s_tin>10);
			do{
			cout<<"Nhap diem Tieng Anh: ";
			cin>>s_eng;	
			}while(s_eng<0&&s_eng>10);
		}
		float getToan(){
			return s_toan;
		}
		float getTin(){
			return s_tin;
		}
		float getEng(){
			return s_eng;
		}
};
class infoST:public score{
	private:
		float GPA;
		string ID, Class;
	public:
		void NhapI(){
			cout<<"Nhap ma sinh vien: ";
			fflush(stdin);
			getline(cin, ID);
			cout<<"Nhap lop: ";
			fflush(stdin);
			getline(cin, Class);
			NhapS();
			GPA=(getToan()+getTin()+getEng())/3;
			}
		void XuatI(int i){
			gotoxy(65, i+5);
			cout<<ID;
			gotoxy(83, i+5);
			cout<<Class;
			gotoxy(98, i+5);
			cout<<getToan();
			gotoxy(113, i+5);
			cout<<getTin();
			gotoxy(128, i+5);
			cout<<getEng();
			gotoxy(143, i+5);
			cout<<GPA;
		}
		float GetGPA(){
			return GPA;
		}
		string GetID(){
			return ID;
		}
	};
class SinhVien:public infoST{
	private: 
		Name n;
		string Gender, DOB;
	public:
		void Nhap();
		void Xuat(int i);
		string getFirstname(){
			return n.Lastname;
		}
		string getLaststname(){
			return n.Firstname;
		}
	};
void SinhVien::Nhap(){
	cout<<"Nhap ho ten dem: ";
	fflush(stdin);
	getline(cin,n.Firstname);
	cout<<"Nhap ten: ";
	fflush(stdin);
	getline(cin,n.Lastname);
	cout<<"Nhap gioi tinh (1. Nam | 2. Nu | 3. Khac): ";
	fflush(stdin);
	cin>>Gender;
	cout<<"Nhap ngay sinh: ";
	do{
	cout<<"\n\tNhap ngay sinh: ";
	cin>>d.day;
	}while(d.day<=0&&d.day>31);
	do{
	cout<<"\tNhap thang sinh: ";
	cin>>d.month;
	}while(d.month<=0&&d.month>12);
	do{
	cout<<"\tNhap nam sinh: ";
	cin>>d.year;
	}while(d.year<0&&d.year>2021);
	NhapI();
	}
void SinhVien::Xuat(int i){
	gotoxy(15, i+5);
	cout<<n.Firstname<<" "<<n.Lastname;
	if(Gender == 1){
		gotoxy(38, i+5);
		cout<<"Nam";
	}
	else if(Gender == 2){
		gotoxy(35, i+5);
		cout<<"Nu";
	}
	else if(Gender == 3){
		gotoxy(35, i+5);
		cout<<"Khac";
	}
	gotoxy(50, i+5);
	cout<<d.day<<"/"<<d.month<<"/"<<d.year;
	XuatI(i);
}

class ThaoTac{
	private:
		vector <SinhVien *> SV;
	public:
		void NhapDS();
		void XuatDS();
		void GPASort();
		void NameSort();
		void Edit();
		void SearchName();
		void SearchMSV();
		void Delete();
		void Add();
		void Warning();
};
void ThaoTac::NhapDS(){
	SinhVien *st;
	int n;
	cout<<"Nhap so luong Sinh Vien: ";
	cin>>n;
	if(n==0){
		cout<<"\n********************************\n";
		cout<<"Ban chua nhap Sinh Vien nao"<<endl;
	}
	else{
		for(int i=0; i<n; i++){
			cout<<"\n********************************\n";
			st=new SinhVien;
			st->Nhap();
			SV.push_back(st);
		}
		cout<<"\n********************************\n";
		cout<<"Nhap thanh cong!"<<endl;
	}
}
void ThaoTac::XuatDS(){
	gotoxy(60,1);
	textcolor(223);
	cout<<"                                                     ";
	gotoxy(60,2);
	cout<<"                  DANH SACH SINH VIEN                ";
	gotoxy(60,3);
	cout<<"                                                     ";
	textcolor(224);
	gotoxy(5,4);
	cout<<"  STT                     ";
	gotoxy(15, 4);
	cout<<"Ho ten                     ";
	gotoxy(38, 4);
	cout<<"Gioi tinh               ";
	gotoxy(50, 4);
	cout<<"Ngay sinh               ";
	gotoxy(65, 4);
	cout<<"Ma sinh vien            ";
	gotoxy(83, 4);
	cout<<"Lop                    ";
	gotoxy(98, 4);
	cout<<"Diem Toan              ";
	gotoxy(113, 4);
	cout<<"Diem Tin                 ";
	gotoxy(128, 4);
	cout<<"Diem T.A                  ";
	gotoxy(143, 4);
	cout<<"Diem TB        ";
	textcolor(15);
	for(int i=0; i<SV.size(); i++){
		gotoxy(7,i+5);
		cout<<i+1;
		SV.at(i)->Xuat(i);
		}
	if(SV.size()==0){
		textcolor(4);
		gotoxy(60,8);
		cout<<"Chua co sinh vien nao duoc nhap vao danh sach!"<<endl;
		textcolor(15);
	}
	else{
		cout<<"\n\n\n\n\n********************************\n";
		textcolor(10);
		cout<<"Danh sach co "<<SV.size()<<" Sinh Vien."<<endl;
		textcolor(15);	
	}
}
void ThaoTac::GPASort(){
	for(int i=0;i<SV.size()-1;i++){
                for(int j=i+1;j<SV.size();j++){
                    if(SV.at(i)->GetGPA() < SV.at(j)->GetGPA()){
                        SinhVien *t= SV.at(i);
                        SV.at(i)=SV.at(j);
                        SV.at(j)=t;
                    }
                }
            }
	}
void ThaoTac::NameSort(){
	for(int i=0;i<SV.size()-1;i++){
		for(int j=i+1;j<SV.size();j++){
		   if((SV.at(i)->getLastname()).compare(SV.at(j)->getLastname())>0){
				SinhVien *k = SV.at(i);
            	SV.at(i)=SV.at(j);
            	SV.at(j)=k;
			}
		}
	} 
}
void ThaoTac::Edit(){
	string k;
	int d=0;
	if(SV.size()==0){
		cout<<"Hien chua co sinh vien nao!!!";
	}
	else{
		cout<<"Nhap MSSV can thay doi thong tin: ";
		fflush(stdin);
		getline(cin, k);
		for(int i=0; i<SV.size(); i++){
			if(k.compare(SV.at(i)->getID())==0){
				SV.at(i)->Nhap();
				d++;
			}
		if(d==0){
		textcolor(15);
		cout <<"Khong tim thay MSSV can tim!!!";
		}
		}
	}	
}
void ThaoTac::SearchName(){
	string SName;
	int dem;
	cout <<"Nhap ten sinh vien can tim: ";
	fflush(stdin);
	getline(cin,SName);
	for(int i=0; i<SV.size(); i++){
		if(SName.compare(SV.at(i)->getName())==0){
			SV.at(i)->Xuat(i);
			dem++;
		}
		if(dem==0){
			cout <<"Khong tim thay sinh vien can tim!!!";
		}
	}
}
void ThaoTac::SearchMSV(){
	string SMSV;
	int dem;
	cout <<"Nhap MSV can tim: ";
	fflush(stdin);
	getline(cin,SMSV);
	for(int i=0; i<SV.size(); i++){
		if(SMSV.compare(SV.at(i)->getMSV())==0){
			SV.at(i)->Xuat(i);
			dem++;
		}
	if(dem==0){
		cout<<"Khong tim thay sinh vien co MSV vua nhap!!!";
	}
	}
}
void ThaoTac::Warning(){

}
void ThaoTac::Delete(){
	string k;
	int dem;
	if(SV.size()==0){
		gotoxy(60,3);
		textcolor(12);
		cout<<"Hien chua co sinh vien nao!!!"<<endl;
		textcolor(15);
	}
	else{
	cout<<"Nhap MSSV can xoa: ";
	fflush(stdin);
	getline(cin, k);
		for(int i=0; i<SV.size(); i++){
			if(k.compare(SV.at(i)->getID())==0){
				SV.erase(SV.begin()+i);
				textcolor(10);
				cout<<"Xoa thanh cong!";
				textcolor(15);
				dem=1;
			}
			if(dem!=1){
				textcolor(12);
				cout<<"Khong tim thay MSSV can xoa!!!";
				textcolor(15);	
			}
		}
	}
}
void ThaoTac::Add(){
	SinhVien *s;
	s=new SinhVien;
	s->Nhap();
	SV.push_back(s);
	cout<<"\n****************************\n";
	textcolor(10);
	cout<<"Them sinh vien thanh cong!";
	textcolor(15);
}
int main(){
	SinhVien s;
	ThaoTac act;
	int n;
	s.Nhap();
	}
