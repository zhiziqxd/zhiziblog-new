#include "var.h"
using namespace std;
int n;
string str;
int main(){
	cout<<"��ӭ����Ա"<<endl;
	sleep(1);
	system("cls");
	init();
	while(true){
		cout<<"��ʲô"<<endl;
		cout<<"0.�˳�"<<endl;
		cout<<"1.cmd"<<endl;
		cout<<"2.��������"<<endl;
		cout<<"3.ɾ������"<<endl;
		cin>>n;
		if(n==0){
			break;
		}
		else if(n==1){
			zcmd();
		}
		else if(n==2){
			add();
		}
		else if(n==3){
			del();
		}
		else{
			cout<<"no"<<endl;
		}
		sleep(1);
		system("cls");
	}
	end();
	return 0;
}
