float average(int a,int b,int c){
	return (a+b+c)/3.0;
}
void main(){
	int a,b,c;
	float z;
	printf(" ");
	scanf("%d%d%d",&a,&b,&c);
	z=average(a,b,c);
	printf("Average=%.2f",z);
	getch();
}
