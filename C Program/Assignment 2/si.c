int simpleinterest(float p,float r,float t){
	return (p*r*t)/100.00;
}
void main(){
	float a,b,c,si;
	printf("enter three number");
	scanf("%f%f%f",&a,&b,&c);
	si=simpleinterest(a,b,c);
	printf("SI=%.2f",si);
	getch();
}
