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
	text("title","博客");
	a("主页",url);
	a("每日一言",url+"/day.cgi");
	a("留言本",url+"/say.html");
	a("搜索",url+"/find.html");
	cout<<"</br>"<<endl;
	text("h1","欢迎来到我的博客!");
	cout<<"</head>"<<endl;
	cout<<"<body>"<<endl;
	text("h2","文章列表");
	for(int i=1;i<=cnt;i++){
		text("h3",t[i].name);
		out(t[i].txt);//支持新的语法
	}
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	return 0;
}
