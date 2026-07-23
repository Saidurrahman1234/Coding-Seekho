void main(){
	int a,b,s=0;
	printf("Enter a Number:");
	scanf("%d",&a);
    int n=a;
	while(a!=0){
		b=a%10;
	    s=s+b*b*b;
	    a=a/10;
		}
		if(n==s){
		printf("%d is an Armstrong Number",s);
    }
    else{
    	printf("%d is Not an Armstrong number",n);
	}
	
	getch();
}
