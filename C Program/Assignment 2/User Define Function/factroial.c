int factorial(int n){
	int i,s=1;
	for(i=1;i<=n;i++){
		s=s*i;
	}
	return s;
}
void main(){
	int z,a;
	printf("enter a number:");
	scanf("%d",&a);
	z=factorial(a);
	printf("%d",z);
	getch();
}
