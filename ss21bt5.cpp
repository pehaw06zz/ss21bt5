#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("bt05.txt","w");
	if(f==NULL){
		printf("khong the mo file.\n");
		return 1;
	}
	int so_dong;
	printf("nhap vao so dong");
	scanf("%d",&so_dong);
	getchar();
	char dong[100];
	for(int i=0;i<so_dong;i++){
		printf("nhap vao noi dung cua dong: %d",i+1);
		fgets(dong,sizeof(dong),stdin);
		fprintf(f,"%s\n",dong);
	}
	fclose(f);
	f=fopen("bt05.txt","r");
	if(f==NULL){
		printf("khong the mo file.\n");
		return 1;
	}
	printf("noi dung trong file.\n");
	while(fgets(dong,sizeof(dong),f)!=NULL){
		printf("%s",dong);
	}
	fclose(f);
	
	return 0;
}
