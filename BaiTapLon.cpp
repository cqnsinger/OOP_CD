#include<iostream>
#include<vector>
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
			}
	};
class SinhVien:public infoST{
	private: 
		string Name, Gender, DOB;
	public:
		void Nhap();
		void Xuat();
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
class ThaoTac{
	private:
		vector <SinhVien *> SV;
	public:
		void NhapDS();
		void Xuat();
};
int main(){
	SinhVien s;
	ThaoTac act;
	int n;
	s.Nhap();
	}
