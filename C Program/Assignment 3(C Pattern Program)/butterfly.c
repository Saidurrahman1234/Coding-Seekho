void main(){
	int i,j,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
	}
		for(j=1;j<=2*(n-i);j++){
			printf(" ");
			}
		for(j=1;j<=i;j++){
		printf("*");
		}
		printf("\n");
	}
	n=n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i+1;j++){
			printf("*");
		}
		for(j=1;j<=2*i;j++){
			printf(" ");
		}
		for(j=1;j<=n-i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	}

