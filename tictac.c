#include <stdio.h>
int main(){
	char h[3][3];
	char a,sel;
	char check[9];
	int i,j,chk,c,cnt1,cnt2;
	start:
	system("cls");
	c=0;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			h[i][j]=(j+c+48)+(i+1);
		}
		c+=2;
	}
	printf("Permainan TIC-TAC TOE (Dibuat oleh Hendy-20170801143)!\nSilahkan melanjutkan dengan mengklik Apa Saja!\n");
	getch();
	for (c=0;c<9;c++){
		cnt1=0;
		cnt2=0;
		system("cls");
		if(c%2==0){
		printf("\nGiliran Player 1\n\n");
		}else{
  		printf("\nGiliran Player 2\n\n");
		}
		printf("-------------------------------------------------\n");
		for (i=0;i<3;i++){
			printf("|");
			for (j=0;j<3;j++){
				printf("\t%c\t|",h[i][j]);
			}
			printf("\n-------------------------------------------------\n");
		}
		opt:
		printf("\nPilih nomor untuk ditempatkan : ");
		scanf(" %c",&a);
		check[c]=a;
		for(chk=0;chk<c;chk++){
  		    if(check[chk]==a){
 			    printf("\nSalah, Ulangi Input!\n");
 			    goto opt;
 			}
		}
		if(a<49 || a>57){
	 		 printf("\nSalah, Ulangi Input!\n");
 			 goto opt;
		}
		if(c%2==0){
			for (i=0;i<3;i++){
				for (j=0;j<3;j++){
					if (h[i][j]==a){
						h[i][j]='X';
					}
				}
			}
		}else{
			for (i=0;i<3;i++){
				for (j=0;j<3;j++){
					if (h[i][j]==a){
						h[i][j]='O';
					}
				}
			}
		}
	//========================================
	if(h[0][0]==h[1][0] && h[0][0]==h[2][0]){
		   if(h[0][0]=='X'){
		       cnt1++;
		   }
		   if(h[0][0]=='O'){
		       cnt2++;
		   }
	}
	if(h[0][1]==h[1][1] && h[0][1]==h[2][1]){
		   if(h[0][1]=='X'){
		       cnt1++;
		   }
		   if(h[0][1]=='O'){
		       cnt2++;
		   }
	}
	if(h[0][2]==h[1][2] && h[0][2]==h[2][2]){
		   if(h[0][2]=='X'){
		       cnt1++;
		   }
		   if(h[0][2]=='O'){
		       cnt2++;
		   }
	}
	if(h[0][0]==h[0][1] && h[0][0]==h[0][2]){
		   if(h[0][0]=='X'){
		       cnt1++;
		   }
		   if(h[0][0]=='O'){
		       cnt2++;
		   }
	}
	if(h[1][0]==h[1][1] && h[1][0]==h[1][2]){
		   if(h[1][0]=='X'){
		       cnt1++;
		   }
		   if(h[1][0]=='O'){
		       cnt2++;
		   }
	}
	if(h[2][0]==h[2][1] && h[2][0]==h[2][2]){
		   if(h[0][0]=='X'){
		       cnt1++;
		   }
		   if(h[0][0]=='O'){
		       cnt2++;
		   }
	}
	if(h[0][2]==h[1][1] && h[0][2]==h[2][0]){
 	       if(h[0][2]=='X'){
		       cnt1++;
           }
		   if(h[0][2]=='O'){
		       cnt2++;
		   }
 	}
	if(h[0][0]==h[1][1] && h[0][0]==h[2][2]){
		   if(h[0][0]=='X'){
		       cnt1++;
           }
		   if(h[0][0]=='O'){
		       cnt2++;
		   }
 	}
	if(cnt1>0){
 	system("cls");
 	printf("Hasil Akhir :\n-------------------------------------------------\n");
		for (i=0;i<3;i++){
			printf("|");
			for (j=0;j<3;j++){
				printf("\t%c\t|",h[i][j]);
			}
		printf("\n-------------------------------------------------\n");
	}
	printf("\nPlayer 1 WIN!");
	goto end;
	}
	if(cnt2>0){
 	system("cls");
 	printf("Hasil Akhir :\n-------------------------------------------------\n");
		for (i=0;i<3;i++){
			printf("|");
			for (j=0;j<3;j++){
				printf("\t%c\t|",h[i][j]);
			}
		printf("\n-------------------------------------------------\n");
	}
	printf("\nPlayer 2 WIN!");
	goto end;
	}				
	}
	system("cls");
	printf("Hasil Akhir :\n-------------------------------------------------\n");
		for (i=0;i<3;i++){
			printf("|");
			for (j=0;j<3;j++){
				printf("\t%c\t|",h[i][j]);
			}
		printf("\n-------------------------------------------------\n");
	}
	printf("\nDRAW!");
	end:		 
	printf("\n\nContinue Playing?? [Y/N]\n");
	scanf(" %c",&sel);
	if (sel=='y' || sel=='Y'){
		goto start;
	}else if (sel=='n' || sel=='N'){
		printf("\nTerima Kasih Karena Telah Bermain!!");
	}else{
		system("cls");
		printf("Maaf, Input anda Salah, coba Ulangi..");
		goto end;
	}
	getch();
}
