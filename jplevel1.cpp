#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,j,i,h,k=0,bintang,spasi=0;
	string num;
	cin>>n;
	cin>>num;
	bintang = n * 2 + 1;
		if(num=="penuh" || num=="PENUH"){
			for(i=0;i<n+1;i++){
				for(j=0;j<spasi;j++){
					cout<<" ";
				}
				for(j=0;j<bintang;j++){
					cout<<"*";
				}
				bintang = bintang - 2 ;
				spasi++;
				cout<<endl;
			}
			bintang=1;
			h=n;
			for(i=0;i<n+1;i++){
				for(j=0;j<h;j++){
					cout<<" ";
				}
				for(j=0;j<bintang;j++){
					cout<<"*";
				}
				bintang = bintang + 2;
				h--;
				cout<<endl;
			}	
		}

		else if(num=="kosong"||num=="KOSONG"){
			for(i=0;i<n+1;i++){
				for(j=0;j<spasi;j++){
					cout<<" ";
				}
				for(j=0;j<bintang;j++){
					cout<<"*";
				}
				bintang = bintang - 2 ;
				spasi++;
				cout<<endl;
			}
			bintang=1;
			h=n;
			for(i=0;i<n+1;i++){
				if(i==0){
					cout<<"";	
				}
				else{
					for(j=0;j<h;j++){
						cout<<" ";
					}
					if(i==0 || i==n){
						for(j=0;j<bintang;j++){
							cout<<"*";
						}			
					}
					else{
						for(j=0;j<bintang;j++){
							if(j==0 || j==bintang-1){
								cout<<"*";	
							}
							else{
								cout<<" ";
							}
						}			
					}			
					cout<<endl;
				}
				bintang = bintang + 2;
				h--;			
			}	
		}
		k++;
	
	
	return 0;
}
