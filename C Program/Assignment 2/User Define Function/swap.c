int swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void main(){
	int a,b;
	float z;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	z=swap(a,b);
	printf("After Swap: a=%d b=%d",a,b);
	getch();
}
