#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;   

//亂數
int rd() {    
    
    int a=0,b=0,c,d,e; 
	
	cout<<"範圍為1-1000"<<endl; 
	srand(time(NULL));
    c=(rand()%1000)+1;
    cout<<"開始輸入號碼："<<endl;
	while(cin>>d){	
	
		if(d<c){	
			if(d<a){
				cout<<"請重新輸入比起始值大"<<endl;
			}else{
				a=d;
				cout<<a<<"-"<<b<<endl;
			}
		}else if(d>c){
			if(d>b){
				cout<<"請重新輸入比終止值小"<<endl;
			}else{
				b=d;
				cout<<a<<"-"<<b<<endl;
			}	
		}else if(d==c){
			cout<<"恭喜猜中！"<<endl; 
			break;
		}
	}	
    return 0;    
} 

int main() {    
    
    int a=0,b=0,c,d,e; 
	cout<<"請輸入遊戲模式1自選號碼2亂數號碼：";
	
	while(cin>>e){	
	if(e==1){
		break;
	}else
	{
		rd();
	}
	}
	cout<<"請輸入起始範圍："<<endl;
	cin>>a;
	cout<<"請輸入終止範圍："<<endl;
	cin>>b;
	cout<<"請輸入選定號碼："<<endl;
	cin>>c;
	while(cin>>d){	
	
		if(d<c){	
			if(d<a){
				cout<<"請重新輸入比起始值大"<<endl;
			}else{
				a=d;
				cout<<a<<"-"<<b<<endl;
			}
		}else if(d>c){
			if(d>b){
				cout<<"請重新輸入比終止值小"<<endl;
			}else{
				b=d;
				cout<<a<<"-"<<b<<endl;
			}	
		}else if(d==c){
			cout<<"恭喜猜中！"<<endl; 
			break;
		}
	}	
    return 0;    
}    

    
