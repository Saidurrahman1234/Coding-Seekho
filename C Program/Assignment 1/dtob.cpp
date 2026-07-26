int main(){
	int a,b[32],i=0;
	printf(" Enter a number:");
	scanf("%d",&a);
	while(a>0){
		b[i]=a%2;
		a=a/2;
		i++;
		}
	printf("Binary=");
	for(i=i-1;i>=0;i--){
		printf("%d",b[i]);
	}
	getch();
}
