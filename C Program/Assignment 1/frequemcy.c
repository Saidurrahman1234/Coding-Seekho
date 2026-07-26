void main(){
	int i,n,d,c,count=0;
	printf(" N :");
	scanf("%d",&n);
	printf(" D:");
	scanf("%d",&d);
	while(n!=0){
		c=n%10;
		if(c==d){
			count++;
		}
		n/=10;
	}
	printf("%d appears %d times",d,count);
	
	
	getch();
}
