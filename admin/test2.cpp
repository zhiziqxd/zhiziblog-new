#include "var.h"
#include "web.h"
using namespace std;
string a;
int main(){
	cout<<"Content-type:text/html\r\n\r\n";
	getline(cin,a);
  a=substr(5,a.length()-5);
	cout<<"<html>"<<endl;
	cout<<"<head>"<<endl;
	go();
	cout<<"</br>"<<endl;
	cout<<"<h2>以下是结果</h2>"<<endl;
	cout<<"</head>"<<endl;
	cout<<"<body>"<<endl;
	for(int i=1;i<=cnt;i++){
		if(t[i].name.find(a)){
			cout<<t[i].name<<endl;
			out(t[i].txt);
		}
	}
	cout<<"</body>"<<endl;
	cout<<"</html>"<<endl;
	return 0;
}
