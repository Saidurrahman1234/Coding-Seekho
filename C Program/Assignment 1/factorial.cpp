int main(){
	int n,i,f=1;
	printf("enter the numner :");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		f=f*i;
	}
	printf("%d! is %d",n,f);
	getch();
}
