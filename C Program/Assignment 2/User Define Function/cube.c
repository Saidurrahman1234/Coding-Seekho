int cube(int n){
	return n*n*n;
}
void main(){
	int z,a,b,c;
	printf(" ");
	scanf("\t%d\t%d\t%d",&a,&b,&c);
	z=cube(a);
	printf("Cube(%d)=%d\t",a,z);
	z=cube(b);
	printf("Cube(%d)=%d\t",b,z);
	z=cube(c);
	printf("Cube(%d)=%d\t",c,z);
	getch();
}
