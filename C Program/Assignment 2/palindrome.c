int isPalindrome(int n){
	int a,s=0,c;
	c=n;
	while(n!=0){
		a=n%10;
		s=s*10+a;
		n/=10;	
	}
	if(c==s){
		return 1;
	}
	return 0;
}
void main(){
	int z,x;
	printf("Enter a number:");
	scanf("%d",&x);
	z=isPalindrome(x);
	if(z==1)
	printf("%d is a Palindrome",x);
	else
	printf("%d is Not a Palindrome",x);
	getch();
}

