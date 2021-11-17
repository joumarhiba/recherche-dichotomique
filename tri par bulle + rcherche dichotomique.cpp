#include<stdio.h>

int dichotomique_rch(int t[],int v){
	int m,sup=4,inf=0;
	
	while(inf <= sup){
		m=(sup + inf )/2;
		if(t[m]==v){
			return m;
			}	
		else if(t[m]>v){
			sup=m-1;
		}
		else{
			inf =m+1;
		}
	}
	return -1;
}

int main(){
	 int x,c,v,t[5],i;
	for (int i=0;i<5;i++){
 		printf("la valeur %d : ",i+1);
 		scanf("%d",&t[i]);
	 }
	 
	 do {
		c=0;
	 	for(int i=0;i<4;i++){
	 		if(t[i]>t[i+1]){
	 			int tp;
	 			tp=t[i];
	 			t[i]=t[i+1];
	 			t[i+1]=tp;
	 			c++;  
			 }
		 }
	 }while(c>0);
	 for(i=0;i<5;i++){
	 	printf("%d\t",t[i]);
	 }
	 printf("\ndonner la valeur a rechercher : ");
	scanf("%d",&v);
	x=dichotomique_rch(t,v);
	if(x ==-1){
		printf("%d ne se trouve PAS dans le tableau",v);
	}else {
		printf("%d se trouve dans le tableau",v);
	}
	 return 0;
	 

}
