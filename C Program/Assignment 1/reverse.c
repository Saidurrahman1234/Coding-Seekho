void main(){
	int n,r;
	printf("enter 3 digit no.:");
	scanf("%d",&n);
	r=(n%10)*100+((n/10)%10)*10+(n/100);
	printf("Reverse of %d  is %d",n,r);
}
