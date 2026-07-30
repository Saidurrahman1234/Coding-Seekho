int table(int a){
	int i,result;
	for(i=1;i<=10;i++){
		result=a*i;
		printf("%dx%d=%d\t",a,i,result);
	}
}
void main(){
	int a,z;
	printf("");
	scanf("%d",&a);
	z=table(a);
	getch();
}
