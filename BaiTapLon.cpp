#include<iostream>
#include<vector>
#include"dohoa.h"
using namespace std;
class score{
	private:
		float s_toan, s_tin, s_eng;
	public:
		void NhapS(){
			cout<<"Nhap diem Toan: ";
			cin>>s_toan;
			cout<<"Nhap diem Tin: ";
			cin>>s_tin;
			cout<<"Nhap diem Tieng Anh: ";
			cin>>s_eng;
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
			gotoxy(80, i+5);
			cout<<ID;
			gotoxy(95, i+5);
			cout<<Class;
			gotoxy(115, i+5);
			cout<<getToan();
			gotoxy(130, i+5);
			cout<<getTin();
			gotoxy(145, i+5);
			cout<<getEng();
			gotoxy(160, i+5);
			cout<<GPA;
		}
	};
class SinhVien:public infoST{
	private: 
		string Name, Gender, DOB;
	public:
		void Nhap();
		void Xuat(int i);
	};
void SinhVien::Nhap(){
	cout<<"Nhap ho ten: ";
	fflush(stdin);
	getline(cin,Name);
	cout<<"Nhap gioi tinh: ";
	fflush(stdin);
	getline(cin,Gender);
	cout<<"Nhap ngay sinh: ";
	fflush(stdin);
	getline(cin,DOB);
	NhapI();
	}
void SinhVien::Xuat(int i){
	gotoxy(15, i+5);
	cout<<Name;
	gotoxy(40, i+5);
	cout<<Gender;
	gotoxy(60, i+5);
	cout<<DOB;
	XuatI(i);
	}
class ThaoTac{
	private:
		vector <SinhVien *> SV;
	public:
		void NhapDS();
		void XuatDS();
};
int main(){
	SinhVien s;
	ThaoTac act;
	int n;
	s.Nhap();
	}
