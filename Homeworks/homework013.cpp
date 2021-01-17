#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct polynomialnode *linkin;

struct polynomialnode{
	float coefficient;
	int exponent;
	linkin next;
};

linkin linklist,temp;

int main(){
	linklist=NULL;
	int i=0;
	int tempcoef;
	int tempexpo;
	
	while(i<4){
		
	    temp = (linkin)malloc(sizeof(polynomialnode));
		cout << "Please Enter Coefficient : ";
	    cin >> tempcoef;
	    cout << " Please Enter exponent : ";
	    cin >> tempexpo;
		
	    temp->coefficient=tempcoef;
	    temp->exponent=tempexpo;
	    temp->next=linklist;
	    linklist=temp;
		
	    i++;
    }
	
    i=0;
	
    while(i<4){
		cout << "|" << linklist->coefficient << "|" << linklist->exponent << "|";
		if(linklist->next != NULL){
			cout << "-->";
		}
    	linklist=linklist->next;
    	temp=linklist;
		i++;
	}
}
