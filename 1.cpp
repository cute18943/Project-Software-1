#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;   

//�ü�
int rd() {    
    
    int a=0,b=0,c,d,e; 
	
	cout<<"�п�J�_�l�Ȭ�1�G"<<endl;
	while(cin>>a){
		if(a!=1){
			cout<<"�Э��s��J"<<endl;
		}else
		{
			break;
		}
		
	}	
	cout<<"�п�J�פ�ȡG"<<endl;
	while(cin>>b){
		
		if(b>=a){
			cout<<"�Э��s��J"<<endl;
		}else
		{
			break;
		}
		
	}
	cout<<"�d��1-1000"<<endl; 
	srand(time(NULL));
    c=(rand()%1000)+1;
    cout<<"�}�l��J���X�G"<<endl;
	while(cin>>d){	
	
		if(d<c){	
			if(d<a){
				cout<<"�Э��s��J��_�l�Ȥj"<<endl;
			}else{
				a=d;
				cout<<a<<"-"<<b<<endl;
			}
		}else if(d>c){
			if(d>b){
				cout<<"�Э��s��J��פ�Ȥp"<<endl;
			}else{
				b=d;
				cout<<a<<"-"<<b<<endl;
			}	
		}else if(d==c){
			cout<<"���߲q���I"<<endl; 
			break;
		}
	}	
    return 0;    
} 

int main() {    
    
    int a=0,b=0,c,d,e; 
	cout<<"�п�J�C���Ҧ�1�ۿ︹�X2�üƸ��X�G";
	
	while(cin>>e){	
	if(e==1){
		break;
	}else
	{
		rd();
	}
	}
	cout<<"�п�J�_�l�d��G"<<endl;
	cin>>a;
	cout<<"�п�J�פ�d��G"<<endl;
	cin>>b;
	cout<<"�п�J��w���X�G"<<endl;
	while(cin>>c){
		if(c<=a || c>=b){
			cout<<"�Э��s��J"<<endl;
		}else
		{
			break;
		}	
	}	
	while(cin>>d){	
	
		if(d<c){	
			if(d<a){
				cout<<"�Э��s��J��_�l�Ȥj"<<endl;
			}else{
				a=d;
				cout<<a<<"-"<<b<<endl;
			}
		}else if(d>c){
			if(d>b){
				cout<<"�Э��s��J��פ�Ȥp"<<endl;
			}else{
				b=d;
				cout<<a<<"-"<<b<<endl;
			}	
		}else if(d==c){
			cout<<"���߲q���I"<<endl; 
			break;
		}
	}	
    return 0;    
}    

    
