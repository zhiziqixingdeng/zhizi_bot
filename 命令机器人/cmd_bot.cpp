#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string str,jishi;
int a,b,c,d;
int main(){
	cout<<"你好，我是命令机器人"<<endl;
	cout<<"欢迎使用我"<<endl;
	while(1==1){
		cout<<"请输入命令:";
		cin>>str;
		if(str=="cls"){
			system("cls");
		}
		else if(str=="cmd"){
			system("start cmd.exe");
		}
		else if(str=="bye"){
			cout<<"再见"<<endl;
			system("pause");
		}
		else if(str=="bot"){
			cout<<"好滴，给你来看看新机器人"<<endl;
			system("start https://gptgod.online/#/session/7zy9q6wxx8kw006m1boe9sojz");
		}
		else if(str=="music"){
			a=rand()%2;
			if(a==0){
				system("start https://music.163.com/#/song?id=1895164923");
			}
			else{
				system("start https://music.163.com/#/song?id=2048824267"); 
			}
		}
		else if(str=="sleep"){
			sleep(1);
		}
		else{
			cout<<"404"<<endl; 
		}
	}
} 
