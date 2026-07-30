int ctof(float c){
	return (c*9.0/5.0)+32;
}
void main(){
	int a;
	float z;
	printf("Enter a celsius");
	scanf("%d",&a);
	z=ctof(a);
	printf("F=%f",z);
}
