#include "var.h"
#include "web.h"
using namespace std;
string a;
string d(string x){
	int flag=0;
	string t;
	for(int i=3;i<x.length();i++){
		 if(x[i]=='&'&&x[i+1]=='&'){
		 	flag=i+5;
		 	break;
		  }
		 else{
		 	t+=x[i];
		 }
	}
	s[ans].id=t;
	t="";
	for(int i=flag;i<x.length();i++){
		t+=x[i];
	}
	s[ans].tell=t;
	return;
}
int main(){
	cout<<"Content-type:text/html\r\n\r\n";
	getline(cin,a);
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	cout<<"<tilte>提交成功</title>"<<endl;
	go();
	cout<<"</head>"<<endl;
	init();
	ans++;
	d();
	cout<<"<body>"<<endl;
	cout<<"<p>上传成功！<p>"<<endl;
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	end();
	return 0;
}
