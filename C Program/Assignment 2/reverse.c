int reverseNumber(int n){
	int a,s=0;
	while(n!=0){
		a=n%10;
		s=s*10+a;
		n/=10;
	}
	return s;
}
void main(){
	int z,x;
	printf("enter a number");
	scanf("%d",&x);
	z=reverseNumber(x);
	printf("Reverse=%d",z);
	getch();
}
