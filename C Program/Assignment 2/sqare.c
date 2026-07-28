int square(){
	int a;
	printf(" enter a number:");
	scanf("%d",&a);
	return a*a;
}
void main(){
	int z;
	z=square();
	printf("Square=%d",z);
	getch();
}
