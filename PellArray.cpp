

#include <iostream>
using namespace std;
long long fl[100000] = {0, 1, 2};
long long f(long long x){
	if(fl[x] != 0 || x == 0) return fl[x];
	return fl[x] = (2 * f(x-1) + f(x-2)) % 32767;
}
int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int omg;
		cin>>omg;
		cout<<f(omg) % 32767<<endl;
	}
}


