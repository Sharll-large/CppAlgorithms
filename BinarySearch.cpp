// p: the array to search in
// a: the traget to search
// le: the length of array(also known as searching range)
int search(const int* p, int a, int le){
	int left=0;
	int right=le-1;
	int mid;
	while(left<=right){
		mid = (left+right)/2;
		if(p[mid] == a){
			return mid;
		}
		if(a < p[mid]){
			right = mid - 1;
		}
		if(a > p[mid]){
			left = mid + 1;
		}
	}
	return -1;
}
