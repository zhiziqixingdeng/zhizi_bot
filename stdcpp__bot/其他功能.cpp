#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,c,d;
string name;
int n;
int main(){
	cout<<"你好，这里是其他功能"<<endl;
	sleep(1);
	cout<<"输入你的名字:";
	cin>>name;
	while(1==1){
		cout<<name<<"你有何贵干 1.关于stdcpp_bot 2.听歌(相对于机器人有更多) 3.报告bug 4.更新日志"<<endl;
		cin>>n;
		if(n==1){
			cout<<"这是一个机器人"<<endl;
			sleep(1);
			cout<<"Q:为什么开发呢???"<<endl;
			cout<<"A:因为质子看到GPT的成功，于是想要自己开发一个"<<endl;
			sleep(1);
			cout<<"Q:这个可以在不联网的时候用吗?"<<endl;
			cout<<"A:当然了!我这个只要编译出来exe，就可以用了"<<endl;
			sleep(1);
			cout<<"Q:你用的是什么语言开发的?"<<endl;
			cout<<"A:c++"<<endl;
			sleep(1);
			cout<<"完成"<<endl;
		}
		else if(n==2){
			cout<<"随机一首"<<endl;
			sleep(1);
			a=rand()%2;
			if(a==0){
				system("start https://music.163.com/#/song?id=2050508970"); 
			}
			else if(a==1){
				system("start https://music.163.com/#/song?id=2054066570");
			}
			else{
				system("start https://music.163.com/#/song?id=2056568880"); 
			}
		}
		else if(n==3){
			cout<<"请输入怎么报告 1.邮箱报告 2.github"<<endl;
			cin>>b;
			if(b==1){
				cout<<"邮箱:wang1234567890503@163.com"<<endl;
			} 
			else{
				system("start http://github.com/zhiziqixingdeng");
			}
		}
		else if(n==4){
			cout<<"质子创造出机器人"<<endl;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
