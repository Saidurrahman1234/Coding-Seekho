int gcd(int a,int b){
	int temp;
	do{
		temp=b;
		b=a%b;
		a=temp;
	}
	while(b!=0);
	return a;
}
void main(){
	int a,b,z;
	printf("");
	scanf("%d%d",&a,&b);
	z=gcd(a,b);
	printf("GCD=%d",z);
	getch();
}
