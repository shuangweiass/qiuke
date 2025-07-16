#include<bits/stdc++.h> 
using namespace std;
void permutations(int list[],int k,int m){
	if(k==m){
		for(int i=0;i<m;++i){
			if(i>0)cout<<",";
			cout<<list[i];	
			}
		cout<<endl;
	}else{
	for(int i=k;i<m;++i){
		swap(list[k],list[i]);
		permutations(list,k+1,m);
		swap(list[k],list[i]);
		}
	}
	
}

int main(){
	int list[20];
	int i;
	int size=0;
	cout<<"input"<<endl;
    while(cin>>i,i){
		list[size++]=i;
	
	}

	if(size<1){
		cout<<"end"<<endl;
		return 0;
	}
	cout<<"output"<<endl;
	permutations(list,0,size);
	cout<<"end"<<endl;
	
	return 0;
}
