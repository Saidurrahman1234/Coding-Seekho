void main() {
    char str[100];
    int i,letter=0,digit=0,space=0;
	printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    for(i=0;str[i]!='\0';i++) {
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
		 {
            letter++;
        }
        else if(str[i]>='0'&& str[i]<='9')
		 {
            digit++;
        }
        else if(str[i]== ' ') {
            space++;
        }
    }

    printf("Letters = %d\n", letter);
    printf("Digits = %d\n", digit);
    printf("Spaces = %d\n", space);

    getch();
}
