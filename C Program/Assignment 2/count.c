int countdigits(int n){
	int count=0;
	while(n!=0){
		n/=10;
		count++;
	}
	return count;
}
void main(){
	int a,z;
	printf("enter a number");
	scanf("%d",&a);
	z=countdigits(a);
	printf("Digit Count=%d",z);
	getch();
}
