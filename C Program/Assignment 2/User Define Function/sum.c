int sumOfDigits(int n){
	int a,s=0;
	while(n!=0){
		a=n%10;
		s=s+a;
		n/=10;
	}
	return s;
}
void main(){
	int x,z;
	printf("Enter a number:");
	scanf("%d",&x);
	z=sumOfDigits(x);
	printf("sum of digits=%d",z);
	getch();
}
