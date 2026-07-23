void main(){
	int a,max,i,b;
	printf("Enter a N number value:");
	scanf("%d",&a);
	printf("N=%d:",a);
	for(i=0;i<a;i++){
		scanf("%d",&b);	
		if(i==0){
		max=b;
	}
	else if(b>max){
		max=b;
	} 
	else{
		max=max;
	}
	}
	printf("largest=%d",max);
	
	getch();
}
