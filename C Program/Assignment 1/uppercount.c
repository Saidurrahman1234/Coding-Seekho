void main(){
	int upper=0,lower=0;
	char str[100];
	int a,i;
	printf("Enter a letter:");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>=65&&str[i]<=90){
			upper++;
		}
		else if(str[i]>=97&&str[i]<=122){
			lower++;
		}
	}
	printf("Upper:%d\n",upper);
	printf("Lower:%d",lower);
	
	getch();
}
