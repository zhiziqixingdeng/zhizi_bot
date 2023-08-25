#include <iotream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name;
int a,b,c,d;
int n,qian,zuo=0,cnt=24;
int main(){
	 srand((unsigned)time(NULL)); 
	cout<<"欢迎来到stdcpp_bot的小游戏(小提示)"<<endl;
	sleep(1);
	cout<<"如果要玩更多的话，请前往zhizi-game"<<endl;
	sleep(1);
	system("cls");
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"你好啊,"<<name<<endl;
	while(1==1){
		sleep(1);
		cout<<"请输入你要玩什么"<<endl;
		cout<<"**************"<<endl;
		cout<<"*1.猜数游戏"<<endl;
		cout<<"*2.人生模拟器"<<endl;
		cout<<"*3.赚钱模拟器"<<endl;
		cout<<"*4.算术大师"<<endl;
		cout<<"*5.退出"<<endl;
		cout<<"*************"<<endl;
		cin>>n;
		if(n==1){
			cout<<"已经设置好随机数了"<<endl;
			cout<<"范围：1~1000"<<endl;
			d=rand()%999+1;
			while(a!=d){
				cout<<"请输入你要猜的数:";
				cin>>a;
				if(a>d){
					cout<<"大了"<<endl;
				}
				if(a<d){
					cout<<"小了"<<endl;
				}
			}
			cout<<"恭喜你，猜对了!"<<endl;
		}
		else if(n==2){
			cout<<"开始游戏,"<<name<<endl;
			sleep(1);
			cout<<"你的人生开启"<<endl;
			cnt=24;
			sleep(2);
			system("cls");
			while(1==1){
				cout<<"今年你得了:";
				qian=rand()%10000;
				cout<<"特殊事件"<<endl;
				sleep(1);
				a=rand()%3;
				if(a==0){
					cout<<"你掉了";
					b=rand()%1000;
					cout<<b<<"元钱"<<endl;
					qian-=b;
				}
				else if(a==1){
					cout<<"你彩票中了100元"<<endl;
					qian+=100;
				}
				else{
					cout<<"你遇到了一些小事，但是不足为奇"<<endl;
				}
				cout<<"你:"<<cnt<<"岁了"<<endl;
				cnt++;
				if(cnt>100){
					a=rand()%20;
					if(a<=15){
						cout<<"你死了"<<endl;
						break;
					}
				}
				system("pause");
			}
		}
		else if(n==3){
			cnt=0;
			qian=0;
			cout<<"欢迎来到赚钱模拟器"<<endl;
			system("pause");
			while(1==1){
				cout<<"请输入你要干什么 1.打工 2.股票 3.公司 4.回家睡觉 5.退出"<<endl;
				cin>>a;
				if(a==1){
					cout<<"输入1赚1块钱,输入2结束"<<endl;
					cout<<"输入多少得多少"<<endl;
					system("pause");
					cout<<"输入:";
					for(int i=1;b!=2;i++){
						cin>>b;
						qian+=b;
					}
					cout<<"ok"<<endl;
					cout<<"你现在有:"<<qian<<"块钱"<<endl;
					system("pause");
				}
				else if(a==2){
					cout<<"是否弄股票(股票有风险)"<<endl;
					cout<<"1.要 2.不要"<<endl;
					cin>>a;
					if(a==1){
						cout<<"你的股票:";
						b=rand()%1;
						if(b==0){
							cout<<"赚了";
							c=rand()%10000;
							cout<<c<<"块钱"<<endl;
							qian+=c;
							sleep(1);
						}
						else{
							cout<<"亏了";
							c=rand()%10000;
							cout<<c<<"块钱"<<endl;
							qian-=c;
							sleep(1);
						}
					}
					else{
						cout<<"好的"<<endl;
						sleep(1);
					} 
				}
				else if(a==3){
					cout<<"你的公司需要什么 1.提成 2.更改名字 3.退出"<<endl;
					cin>>a;
					if(a==1){
						cout<<"你赚了:";
						b=rand()%1000;
						cout<<b<<endl;
						qian+=b;
					}
					else if(a==2){
						cout<<"请输入你的新名字:";
						cin>>name;
						system("pause");
					}
					else{
						system("pause");
					}
				}
				else if(a==4){
					cout<<"你回了家"<<endl;
					system("pause");
					system("cls");
				}
				else{
					cout<<"你赚了:"<<qian<<"块"<<endl;
					break;
				}
			} 
		}
		else if(n==4){
			cout<<"欢迎来到算术大师"<<endl;
			cnt=0;
			cout<<"(小提示，输入996699可以退出)"<<endl;
			cout<<"开始算数吧!"<<endl;
			sleep(2);
			for(int i=1;c!=996699;i++){
				a=rand()%100;
				b=rand()%100;
				d=rand()%2;
				cout<<a;
				if(d==0){
					cout<<"+"<<endl; 
				}
				else if(d==1){
					cout<<"-"<<endl;
				}
				else{
					cout<<"x"<<endl;
				}
				cin>>c;
				if(c==996699){
					cout<<"再见"<<endl;
					cout<<"你做对了:"<<cnt<<"道"<<endl; 
					system("pause");
					break;
				}
				if(d==0){
					if(c==a+b){
						cout<<"正确!"<<endl;
						cnt++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else if(d==1){
					if(c==a-b){
						cout<<"正确!"<<endl;
						cnt++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else{
					if(c==a*b){
						cout<<"正确"<<endl;
						cnt++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
			}
		}
		else if(n==5){
			cout<<"再见"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	} 
} 
