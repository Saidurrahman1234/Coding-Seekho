int armstrong(int n){
	int sum=0,a,c;
	c=n;
	while(n!=0){
		a=n%10;
		sum=sum+(a*a*a);
		n/=10;
	}
	if(sum==c){
		return 1;
	}
	else{
		return 0;
	}
}
void main(){
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	b=armstrong(a);
	if(b==1){
		printf("%d is a Armstrong",a);
	}
	else{
		printf("%d is Not a Armstrong",a);
	}
}
