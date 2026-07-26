void main(){
	char  str[1000];
	int i,count=0;
	printf(" Write a sentense :");
	fgets(str,1000,stdlin);
	for(i=0;str[i]>='\0';i++){
		count++;
	}
	printf("World Count=%d",count);
	
	getch();
}
