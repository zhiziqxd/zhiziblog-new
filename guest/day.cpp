#include <iostream>
#include <ctime>
#include "web.h"
using namespace std;
int main(){
	srand(time(NULL));
	cout<<"Content-type:text/html\r\n\r\n";
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	cout<<"<title>每日一言</title>"<<endl;
	a("主页",url);
	a("每日一言",url+"/day.cgi");
	a("留言本",url+"/say.html");
	a("搜索",url+"/find.html");
	cout<<"</br>"<<endl;
	cout<<"</head>"<<endl;
	int r=rand()%3+1;
	if(r==1){
		cout<<"<p>逆水行舟，不进则退</p>"<<endl;
	}
	else if(r==2){
		cout<<"<p>莫等闲，白了少年头，空悲切</p>"<<endl;
	}
	else{
		cout<<"<p>他们的人生本该是充满希望，而不是在深渊的泥潭里绝望的打滚。</p>"<<endl;
	}
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	return 0;
}
