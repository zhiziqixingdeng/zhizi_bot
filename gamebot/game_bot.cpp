#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
int a,b,c,d,n,w,cnt,g,g2,g3;
string str,name,str2;
int main(){
	cout<<"欢迎使用新版本游戏机器人"<<endl;
	sleep(1);
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"我叫质云,你好"<<name<<endl;
	sleep(1);
	system("cls");
	srand((unsigned int)time(NULL)); 
	while(1==1){
		cout<<"请输入你需要玩什么"<<endl;
		cout<<"1.飞花令(我相信你不会卡bug的)"<<endl<<"2.成语接龙"<<endl<<"3.口算练习"<<endl<<"4.记录"<<endl<<"5.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"好的"<<endl;
			cout<<"输入结束结束欧"<<endl;
			while(str!="结束"){
				cnt++;
				cout<<"请输入诗句:";
				cin>>str;
				if(str.find("花")!=std::string::npos){
					cout<<"下一句"<<endl;
				}
				else{
					cout<<"没有花，重说吧"<<endl;
					cnt--;
				}
			}
			cout<<"你完成了"<<cnt<<"次"<<endl<<"历史记录最高:"<<g<<endl;
			if(cnt>g){
				cout<<"你打破了记录"<<endl;
				sleep(1);
				g=cnt;
			}
			else{
				cout<<"继续哦"<<endl;
			}
		}
		else if(n==2){
			cnt=1;
			cout<<"请输入第"<<cnt<<"句:";
			cin>>str;
			w=2;
			while(1==1){
				cnt++;
				if(w==2){
					cout<<"请输入第"<<cnt<<"句:";
					cin>>str2;
					if(str2[1]!=str[str.length()]){
						cout<<"错误"<<endl;
						break;
					}
					else{
						cout<<"继续"<<endl;
						w=1;
					}
				}
				else if(w==1){
					cout<<"请输入第"<<cnt<<"句:";
					cin>>str;
					if(str[1]!=str2[str2.length()]){
						cout<<"错误"<<endl;
						break;
					} 
					else{
						cout<<"继续"<<endl;
						w=2;
					}
				}
				else{
					cout<<"小伙子，改代码可不好，我把你记录清零了啊"<<endl;
					g=0;
					g2=0;
				}
			} 
			cout<<"你完成了"<<cnt<<"次"<<endl<<"历史最高记录:"<<g2<<endl;
			if(cnt>g2){
				cout<<"你打破了记录!"<<endl;
				g2=cnt;
			}
			else{
				system("pause");
			}
		}
		else if(n==3){
			cout<<"请输入练习几道:";
			cin>>cnt;
			for(int i=1;i<=cnt;i++){
				a=rand()%1000+1;
				b=rand()%1000+1;
				c=rand()%3+1;;
				if(c==1){
					cout<<a<<"+"<<b<<"=";
					cin>>d;
					if(d==a+b){
						cout<<"正确!"<<endl;
						w++;
					} 
					else{
						cout<<"错误"<<endl;
					}
				}
				else if(c==2){
					cout<<a<<"-"<<b<<"=";
					cin>>d;
					if(d==a-b){
						cout<<"正确!"<<endl;
						w++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else if(c==3){
					cout<<a<<"x"<<b<<"=";
					if(d==a*b){
						cout<<"正确"<<endl;
						w++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else{
					cout<<"请输入"<<a<<"除以"<<b<<"的商"<<endl;
					cin>>d;
					if(d==a/b){
						if(a%b==0){
							cout<<"正确!"<<endl;
							w++;
						}
						else{
							cout<<"请输入"<<a<<"除以"<<b<<"的余数"<<endl;
							cin>>d;
							if(d==a%b){
								cout<<"正确!"<<endl;
								w++;
							}
							else{
								cout<<"错误"<<endl;
							}
						}
					}
				}
			}
			cout<<"你对了"<<w<<"道,"<<"历史最高"<<g3<<"道"<<endl;
			if(w>g3){
				cout<<"你打破了你的记录"<<endl;
				g3=w;
			}
			else{
				cout<<"继续哦"<<endl;
			}
		}
		else if(n==4){
			cout<<"记录:"<<endl;
			sleep(1);
			cout<<"飞花令:"<<g<<"次"<<endl<<"成语接龙:"<<g2<<"次"<<endl<<"算数:"<<g3<<"道"<<endl;
			system("pause");
		}
		else if(n==5){
			cout<<"感谢使用"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
