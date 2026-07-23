void main(){
	int a,b=0,i,s=0,e=1;
	printf("Enter a Term:");
	scanf("%d",&a);
	if(a>=0){
		for(i=1;i<=a;i++){
			printf("\n%d",b);
			s=b+e;
			b=e;
			e=s;
		}
	}
		else{
			printf("For Negative Number Fibonacci does not exit");
		}
	
	getch();
}
