void main(){
	char  str[1000];
	int i,count=0;
	printf(" Write a sentense :");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			count++;
		}
	}
		if(str[0]!='\0'){
		count++;
		}
	printf("World Count=%d",count);
	
	getch();
}
