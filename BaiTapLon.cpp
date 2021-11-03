#include<iostream>
#include<vector>
using namespace std;
class score{
	protected:
		float s_toan, s_tin, s_eng;
};
class infoST:public score{
	private:
		float GPA;
		string ID, Class, Major;
	public:
		void nhapI(){
			cout<<"Nhap ma sinh vien: ";
			fflush(stdin);
			getline(cin, ID);
			cout<<"Nhap chuyen nganh: ";
			fflush(stdin);
			getline(cin, Major);
			cout<<"Nhap lop: ";
			fflush(stdin);
			getline(cin, Class);
			cout<<"Nhap diem Toan: ";
			cin>>s_toan;
			cout<<"Nhap diem Tin: ";
			cin>>s_tin;
			cout<<"Nhap diem Tieng Anh: ";
			cin>>s_eng;
			GPA=(s_toan+s_tin+s_eng)/3;
			}
		void xuatI(){
		
			}
	};
class SinhVien:public infoST{
	private: 
		string Name, Gender, DOB;
	public:
		void Nhap();
		void Xuat();
		void NhapDS(SinhVien s, int &n);
		void XuatDS(SinhVien s, int n);
	};
class ThaoTac{
	private:
		vector <SinhVien *> SV;
	public:
		void Nhap();
		void Xuat();
};
int main(){
	SinhVien s;
	int n;
	s.NhapDS(s, n);
	}
