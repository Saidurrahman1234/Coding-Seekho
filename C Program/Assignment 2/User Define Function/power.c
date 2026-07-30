int power(int b,int e){
	int a,j=1;
	for(a=1;a<=e;a++){
		j=j*b;
	}
	return j;
}
void main(){
	int b,e,z;
	printf(" ");
	scanf("%d%d",&b,&e);
	z=power(b,e);
	printf("%d^%d=%d",b,e,z);
	getch();
}
