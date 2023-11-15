#include <iostream>
using namespace std;
struct xx{
  string wt;
  string hd;
}s[1000000];
int cnt;
int main(){
  freopen("ÑµÁ·.txt","r",stdin);
  cin>>cnt;
  for(int i=1;i<=cnt;i++){
    getline(cin,s[i].wt);
    getline(cin,s[i].hd);
  }
  freopen("CON","r",stdin);
  string str;
  while(str!="END"){
    cin>>str;
    if(str=="xl"){
      cnt++;
      cout<<"ÎÊÌâ£º";
      getchar();
      getline(cin,s[cnt].wt);
      cout<<"»Ø´ð£º";
      getline(cin,s[cnt].hd);
      cout<<"ok"<<endl;
    }
  }
  freopen("ÑµÁ·.txt","w",stdout);
  cout<<cnt<<endl;
  for(int i=1;i<=cnt;i++){
    cout<<s[i].wt<<endl<<s[i].hd<<endl;
  }
  freopen("CON","w",stdout);
  return 0;
}
