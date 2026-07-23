void main(){
	int i,a,b,count=1;
	printf("enter a number:");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			count++;
			break;
	}
}
if(a<=1){
		printf("It is not Prime and Not composite");
	} else
if(count==1){
	printf("Number is a Prime");
}
else{
	printf("Number is not  Prime");
}
	getch();
}
