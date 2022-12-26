#include <iostream>
using namespace std;
int main(){
	int array[] =  {3,4,5,7,8,9,0,7,4,5,4,3,2,2,1,4,7,8,9,2,43,75,3,2,235,34566,76};
	int length = 27;
	bool flag;
	do{
		flag = false;
		for(int i=1; i<length; i++){
			if(array[i] < array[i-1]){
				flag = true;
				swap(array[i], array[i-1]);
			}
		}
	} while (flag);
	for(int i : array){
		cout<<i<<' ';
	}
}


