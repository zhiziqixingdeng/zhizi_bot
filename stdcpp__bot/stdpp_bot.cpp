#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string str,name;
int a,b,c,d,n;
char y;
double t,f;
bool isprime(int yu){
	if(yu<=1){
		return false;
	}
	else{
		for(int i=2;i<yu;i++){
			if(yu%i==0){
				return false;
			}
		}
	}
	return true;
}
void chuli(string x){
	if(x.find("你好")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("您好")!=std::string::npos){
		cout<<"您好，我是stdcpp_bot"<<endl;
	}
	else if(x.find("计算器")!=std::string::npos||x.find("计算")!=std::string::npos){
		cout<<"好的"<<endl;
		cout<<"请输入你需要什么类型的计算 1.整数 2.分数 3.小数"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入算式(*是称号,/是除号，):";
			cin>>a>>y>>b;
			if(y=='+'){
				cout<<"结果:"<<a+b<<endl;
			}
			else if(y=='-'){
				cout<<"结果:"<<a-b<<endl;
			}
			else if(y=='*'){
				cout<<"结果:"<<a*b<<endl;
			}
			else if(y=='/'&&b!=0){
				cout<<"结果:"<<a/b<<"......"<<a%b<<endl;
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==2){
			cout<<"请输入第一个分数分母和分子(空格隔开):";
			cin>>a>>b;
			cout<<"请输入第二个数的分母和分子(空格隔开):";
			cin>>c>>d;
			cout<<"请输入运算符(*是乘号,/是除号):";
			cin>>y;
			if(y=='+'){
				if(a==c){
					cout<<"结果:"<<a<<"分之"<<b+d<<endl; 
				}
				else{
					cout<<"结果:"<<a*c<<"分之"<<b*c+a*d<<endl;
				}
			}
			else if(y=='-'){
				if(a==c){
					cout<<"结果:"<<a<<"分之"<<b-d<<endl;
				}
				else{
					cout<<"结果:"<<a*c<<"分之"<<b*c-d*a<<endl;
				}
			}
			else if(y=='*'){
				cout<<"结果:"<<a*c<<"分之"<<b*d<<endl; 
			}
			else if(y=='/'){
				cout<<"结果:"<<a*d<<"分之"<<b*c<<endl;
			}
			else{
				cout<<"错了!"<<endl;
			}
		}
		else if(n==3){
			cout<<"请输入算式(*是乘号，/是除号):";
			cin>>t>>y>>f;
			if(y=='+'){
				cout<<"结果:"<<t+f<<endl;
			}
			else if(y=='-'){
				cout<<"结果:"<<t-f<<endl; 
			}
			else if(y=='*'){
				cout<<"结果:"<<t*f<<endl; 
			}
			else if(y=='/'&&f!=0){
				cout<<"结果:"<<t/f<<endl;
			}
			else{
				cout<<"你在干嘛???"<<endl;
			}
		}
		else{
			cout<<"错误，你干嘛"<<endl;
		}
	}
	else if(x.find("提醒我")!=std::string::npos||x.find("计时")!=std::string::npos){
		cout<<"好的"<<endl;
		sleep(1);
		cout<<"输入一下你要几小时:";
		cin>>a;
		cout<<"输入一下你要几分钟:";
		cin>>b;
		cout<<"输入一下要几秒钟:";
		cin>>c;
		cout<<"开始计时"<<endl;
		sleep(a*3600+b*60+c);
		cout<<"计时完成"<<endl;
	}
	else if(x.find("数学")!=std::string::npos||x.find("数学作业")!=std::string::npos){
		cout<<"好，我来帮你"<<endl;
		sleep(1);
		cout<<"要什么类型的 1.换算器 2.质数 3.阶乘 :";
		cin>>n;
		if(n==1){
			cout<<"请输入需要什么的 1.内存 2.面积 3.长度"<<endl;
			cin>>d;
			if(d==1){
				cout<<"志同相合啊，我们都练"<<endl;
				cout<<"请输入多少bit:";
				cin>>a;
				cout<<"一共有:"<<a/8<<"byte"<<endl;
				cout<<"一共有:"<<a/8/1024<<"kb"<<endl;
				cout<<"一共有:"<<a/8/1024/1024<<"MB"<<endl;
				system("pause"); 
			}
			else if(d==2){
				cout<<"请输入几平方厘米:";
				cin>>a;
				cout<<"平方米:"<<a/10000<<endl;
				cout<<"平方千米:"<<a/1000000<<endl;
				system("pause");
			}
			else if(d==3){
				cout<<"请输入几厘米:";
				cin>>a;
				cout<<"分米:"<<a/10<<endl;
				cout<<"米:"<<a/100<<endl;
				system("pause");
			}
			else{
				cout<<"你打错字了!!!"<<endl;
			}
		}
		else if(n==2){
			cout<<"输入一个数，我来判断是不是质数:";
			cin>>a;
			if(isprime(a)==true){
				cout<<"这个是质数"<<endl;
			}
			else{
				cout<<"这个不是质数"<<endl;
			}
		}
		else if(n==3){
			cout<<"输入要求几的阶乘:";
			cin>>a;
			b=1;
			for(int i=1;i<=a;i++){
				b=b*a;
			}
			cout<<"结果:"<<b<<endl;
		}
		else{
			cout<<"？？？"<<endl;
		}
	}
	else if(x.find("游戏")!=std::string::npos){
		cout<<"给你玩玩游戏"<<endl;
		sleep(1);
		system("start 游戏.exe");
	}
	else if(x.find("说唱")!=std::string::npos){
		cout<<"来看看卦者灵风的歌"<<endl;
		sleep(1);
		system("start https://music.163.com/#/song?id=1895164923"); 
	}
	else if(x.find("编程")!=std::string::npos||x.find("c++")!=std::string::npos||x.find("py")!=std::string::npos){
		cout<<"你学编程,太好了"<<endl;
	}
	else if(x.find("菜单")!=std::string::npos){
		cout<<"功能:"<<endl;
		cout<<"(输入这些关键字可以获得)"<<endl;
		cout<<"计算，数学，游戏，说唱"<<endl;
		sleep(1);
	}
	else if(x.find("傻逼")!=std::string::npos||x.find("250")!=std::string::npos||x.find("cnm")!=std::string::npos){
		cout<<"系统监测您在说脏话"<<endl;
	}
	else{
		d=rand()%2;
		if(d==0){
			cout<<"我听不懂啊，输入菜单了解一下我的功能吧"<<endl;
		}
		else if(d==1){
			cout<<"要不听听歌? 1.好 2.不用了"<<endl;
			cin>>n;
			if(n==1){
				system("start https://music.163.com/#/song?id=2048824267"); 
			}
			else{
				cout<<"好滴"<<endl;
			}
		}
		else{
			cout<<"我好像听不懂,输入计算，我来帮你做数学作业"<<endl;
		}
	}
	sleep(1);
	return;
} 
int main(){
	cout<<"你好啊，我是stdcpp_bot,以后我叫自己std啦!"<<endl;
	cout<<"你叫什么:";
	cin>>name;
	if(name=="质子"||name=="zhizi"){
		cout<<"隆重欢迎"<<endl;
	}
	else{
		cout<<"你好啊,"<<name<<endl;
	}
	sleep(1);
	cout<<"std:输入菜单可以打开我的所有功能哦"<<endl;
	while(1==1){
		cout<<name<<":";
		cin>>str;
		if(str=="再见"){
			cout<<"再见!"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"std:";
			chuli(str);
		}
	}
}
