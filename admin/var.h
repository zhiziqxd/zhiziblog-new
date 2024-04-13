#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
struct text{
	string name;
	string txt;
}t[999999];
struct say{
	string id;
	string tell;
}s[9999999];
int cnt,ans;
void init(){
	freopen("text.in","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		getline(cin,t[i].name);
		getline(cin,t[i].txt);
	}
	freopen("say.in","r",stdin);
	cin>>ans;
	for(int i=1;i<=ans;i++){
		getline(cin,s[i].id);
		getline(cin,s[i].tell);
	}
	freopen("CON","r",stdin);
	return;
}
void end(){
	freopen("text.in","w",stdout);
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
	  cout<<t[i].name<<endl;
		cout<<t[i].txt<<endl;
	}
	freopen("say.in","w",stdout);
	cout<<ans<<endl;
	for(int i=1;i<=ans;i++){
		cout<<s[i].id<<endl;
		cout<<s[i].tell<<endl;
	}
	freopen("CON","w",stdout);
	return;
}
void add(){
	cnt++;
	cout<<"Ãû×Ö:";
	getline(cin,t[cnt].name);
	cout<<"ÄÚÈÝ:";
	getline(cin,t[cnt].txt);
	cout<<"ok";
	sleep(1);
	return;
}
void zcmd(){
	string a;
	while(a!="end"){
		cin>>a;
		if(a=="clear text"){
			cnt=0;
		}
		else if(a=="clear say"){
			ans=0;
		}
		else if(a=="say -h"){
			for(int i=1;i<=ans;i++){
				cout<<s[i].id<<":"<<s[i].tell<<" at "<<i<<endl;
			}
		}
		else if(a=="text -h"){
			for(int i=1;i<=cnt;i++){
				cout<<i<<"."<<t[i].name<<endl;
			}
		}
		else if(a=="change"){
			int b;
			string str;
			cin>>b>>str;
			t[b].name=str;
		}
		else if(a=="del"){
			int c;
			cin>>c;
			if(c==cnt){
				cnt--;
			}
			else{
				for(int i=c;i<=cnt;i++){
					t[i].name=t[i+1].name;
					t[i].txt=t[i+1].txt;
				}
			}
		}
		else{
			cout<<"´íÎó"<<endl;
		}
	}
}
#endif
