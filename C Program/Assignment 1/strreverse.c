void main(){
	char str[1000];
	int i,j,temp;
	printf("enter a world:");
	scanf("%[^\n]",str);
	i=0;
	j=strlen(str)-1;
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("Reverse string=%s",str);
	getch();
}
