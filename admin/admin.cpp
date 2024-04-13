#include "var.h"
using namespace std;
int n;
string str;
int main(){
	cout<<"欢迎管理员"<<endl;
	sleep(1);
	system("cls");
	init();
	while(true){
		cout<<"干什么"<<endl;
		cout<<"0.退出"<<endl;
		cout<<"1.cmd"<<endl;
		cout<<"2.发布文章"<<endl;
		cout<<"3.删除文章"<<endl;
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
