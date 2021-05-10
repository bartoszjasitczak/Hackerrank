#include <cstdio>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){

deque<int> mydeque;
int maximum;
int i;

for(i = 0 ; i< k ; i++){
    mydeque.push_back(arr[i]);
 }

 while(k<=n){
 maximum = mydeque[0];
 for(i = 1; i<mydeque.size(); i++)
 {
      if (mydeque[i] > maximum) maximum = mydeque[i];

 }
 printf("%d ", maximum);
 mydeque.pop_front();
 mydeque.push_back(arr[k]);
 k++;

}

printf("\n");

}



int main(){

	int t;
	scanf("%i", &t);
	while(t>0) {
	int n,k;
    	scanf("%i %i" ,&n,&k);
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      	scanf("%i" ,&arr[i]);
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
