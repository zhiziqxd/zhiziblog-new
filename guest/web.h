#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string url="blog.com";//换成自己的域名
void text(string a,string txt){
	cout<<"<"<<a<<">"<<txt<<"</"<<a<<">"<<endl;
}
void a(string name,string link){
	string t="<a href=\""+link+"\">"+name+"</a>";
	cout<<t;
}
void css(string name){
	string html="<link rel=\"stylesheet\" type=\"text/css\" href=\""+name+"\">";
	cout<<html<<endl;
	return;
}
void out(string str){
	bool flag=false;
	cout<<"<p>";
	for(int i=0;i<str.length();i++){
		if(str[i]=='/'&&str[i+1]=='n'){
			cout<<"</br>";
			i++;
		}
		else if(str[i]=='~'&&str[i+1]=='~'){
			if(flag==false){
				cout<<"<del>";
				flag=true;
			}
			else{
				cout<<"</del>";
				flag=false;
			}
			i++;//避免多出
		}
		else{
			cout<<str[i];
		}
	}
	cout<<"</p>"<<endl;
	return;
}
void go(){//导航栏
	a("主页",url);
	a("每日一言",url+"/day.cgi");
	a("留言本",url+"/say.html");
	a("搜索",url+"/find.html");
	return;
}
#endif
