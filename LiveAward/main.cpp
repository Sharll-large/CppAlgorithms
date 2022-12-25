#include <cstdio>
int n,w,b[605],score[100000],inputcount=0;

int max(int a, int b){
	if(a>b)return a;
	else return b;
}

int main(){
	scanf("%d %d", &n,&w);

	for(int k=0; k<n;k++){

		scanf("%d", &score[k]);
		inputcount++;

		b[score[k]]++;
		int people=max(1, inputcount*w/100);
		int count=0;
		int min = 600;

		for(int i=600;i>=0;i--){
			if(b[i]!=0 && count<people){
				min = i;
			}
			count+=b[i];
		}
		printf("%d ", min);
	}
}
