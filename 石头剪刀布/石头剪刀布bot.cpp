#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int flag,td[10000],a,b,cnt,ans,aaa;
string name;
int main(){
  cout<<"欢迎来到石头剪刀布机器人"<<endl;
  cout<<"请输入你的名字:";
  cin>>name;
  cout<<"欢迎,"<<name<<endl;
  sleep(1);
  system("cls");
  while(true){
    cout<<"请输入你要出什么"<<endl<<"1.石头"<<endl<<"2.剪刀"<<endl<<"3.布"<<endl;
    cin>>a;
    if(a>=4||a<1){
      cout<<"无效的选项"<<endl;
      sleep(1);
      break;
    }
    else{
      aaa++;
      if(aaa==1||aaa==2){
        b=rand()%2;
      }
      else if(td[aaa-1]==1){
        b=3;
      }
      else if(td[aaa-1]==2){
        b=1;
      }
      else if(td[aaa-1]==3){
        b=2;
      }
      else{
        a=3;
      }
      td[aaa]=a;
    }
    if(a==1&&b==1&&a==2&&b==2||a==1&&b==2){
      cout<<"平局"<<endl;
    }
    else if(a==1&&b==2||a==2&&b==3||a==3&&b==1){
      cout<<"you win!"<<endl;
      cnt++;
    }
    else{
      cout<<"mr win!"<<endl;
      ans++;
    }
    cout<<cnt<<":"<<ans<<endl;
    sleep(1);
    system("cls");
  }
  return 0;
}
