#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string url="blog.com";//�����Լ�������
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
			i++;//������
		}
		else{
			cout<<str[i];
		}
	}
	cout<<"</p>"<<endl;
	return;
}
void go(){//������
	a("��ҳ",url);
	a("ÿ��һ��",url+"/day.cgi");
	a("���Ա�",url+"/say.html");
	a("����",url+"/find.html");
	return;
}
#endif
