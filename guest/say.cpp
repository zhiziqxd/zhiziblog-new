#include <iostream>
#include <string>
#include "web.h"
#include "var.h"
using namespace std;
string str;
int main(){
	cout<<"Content-type:text/html\r\n\r\n";
	init();
	while(str!="</html>"){
		getline(cin,str);
		if(str!="list"){
			cout<<str<<endl;
		}
		else{
			for(int i=1;i<=ans;i++){
				cout<<"<p>"<<s[i].id<<":"<<s[i].tell<<"</p>"<<endl;
			}
		}
	}
	return 0;
}
