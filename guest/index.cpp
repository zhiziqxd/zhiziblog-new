#include "var.h"
#include "web.h"
using namespace std;
int main(){
	cout<<"Content-type:text/html\r\n\r\n";
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	cout<<"<stlye>"<<endl;
	css("stlye.css");
	cout<<"</stlye>"<<endl;
	text("title","����");
	a("��ҳ",url);
	a("ÿ��һ��",url+"/day.cgi");
	a("���Ա�",url+"/say.html");
	a("����",url+"/find.html");
	cout<<"</br>"<<endl;
	text("h1","��ӭ�����ҵĲ���!");
	cout<<"</head>"<<endl;
	cout<<"<body>"<<endl;
	text("h2","�����б�");
	for(int i=1;i<=cnt;i++){
		text("h3",t[i].name);
		out(t[i].txt);//֧���µ��﷨
	}
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	return 0;
}
