#include <iostream>
#include <ctime>
#include "web.h"
using namespace std;
int main(){
	srand(time(NULL));
	cout<<"Content-type:text/html\r\n\r\n";
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	cout<<"<title>ÿ��һ��</title>"<<endl;
	a("��ҳ",url);
	a("ÿ��һ��",url+"/day.cgi");
	a("���Ա�",url+"/say.html");
	a("����",url+"/find.html");
	cout<<"</br>"<<endl;
	cout<<"</head>"<<endl;
	int r=rand()%3+1;
	if(r==1){
		cout<<"<p>��ˮ���ۣ���������</p>"<<endl;
	}
	else if(r==2){
		cout<<"<p>Ī���У���������ͷ���ձ���</p>"<<endl;
	}
	else{
		cout<<"<p>���ǵ����������ǳ���ϣ��������������Ԩ����̶������Ĵ����</p>"<<endl;
	}
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	return 0;
}
