#include <iostream>
using namespace std;

class sophuc{
	private:
	int pt,pa;
	public:
	    void nhap(){
    		cout<<"Nhap phan thuc:";
    		cin>>pt;
    		cout<<"Nhap phan ao:";
    		cin>>pa;	
    	}
    	void in(){
	    	cout<<"A="<<pa<<"+"<<pa<<"*j"<<endl;  	
	    }
	    int getPT(){
    		return pt;
    	}
    	   int getPA(){
    		return pa;
    	}
};
int main()
	    {
    		sophuc a[2];
    		for( int i=0;i<2;i++){
		    a[i].nhap();
		    }
		    cout<<"\n Tong cua 2 so vua nhap la:"<<a[0].getPT()+a[1].getPT()<<"+"<<a[0].getPA()+a[1].getPA()<<"*j";
    	}
