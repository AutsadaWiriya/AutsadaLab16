#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *a, int *b, int *c, int *d){
	int num[] = {*a,*b,*c,*d};
	int size = sizeof(num)/sizeof(num[0]);
	int num_new[size] = {};

	num_new[0] = num[rand()%4] ;
	do{
		num_new[1] = num[rand()%4] ;
	}while(num_new[1] == num_new[0])  ;
	do{
		num_new[2] = num[rand()%4] ;
	}while(num_new[2] == num_new[0] or num_new[2] == num_new[1])  ;
	do{
		num_new[3] = num[rand()%4] ;
	}while(num_new[3] == num_new[0] or num_new[3] == num_new[1] or num_new[3] == num_new[2])  ;

	*a = num_new[0] ;
	*b = num_new[1] ;
	*c = num_new[2] ;
	*d = num_new[3] ;
}
