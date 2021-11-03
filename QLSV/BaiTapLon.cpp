#include<iostream>
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
struct Node{
	SinhVien data;
	Node *next;
};
void SinhVien::Nhap(){
	cout<<"Nhap ho ten: ";
	fflush(stdin);
	getline(cin, Name);
	cout<<"Nhap gioi tinh: ";
	fflush(stdin);
	getline(cin, Gender);
	cout<<"Nhap ngay sinh: ";
	fflush(stdin);
	getline(cin, DOB);
	nhapI();
	}
struct SList{
	Node *head;
	Node *tail;
	long size;
	SList();
	Node* CreateNode(SinhVien v);
	void addST(SinhVien v);
	};
SList::SList(){
	head = NULL;
	tail = NULL;
	size = 0;
}
void SinhVien::NhapDS(SinhVien s, int &n){
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	for(int i=0; i<n; i++){
		Nhap();
		}
	}
Node* SList::CreateNode(SinhVien v){
	Node* p = new Node;
	p->data = v;
	p->next = NULL;	
	return p; 
}
void SList::addST(SinhVien v){
	Node* p = CreateNode(v);
	p->next = head;
	head = p;
	if (size == 0)
		tail = p;
	size++;
	}
int main(){
	SinhVien s;
	int n;
	s.NhapDS(s, n);
	}
