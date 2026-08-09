#include<stdio.h>
#include<math.h>
int main(){
	int group_persons;
	float per_person,Total_cost;
	printf("Enter the price of per person, Enter the value of group");
	scanf("%f %d", &per_person,&group_persons);
	Total_cost = ceil(group_persons*per_person);
	printf("The minimum cost for a cenima ticket is %f", Total_cost);

	return 0;
}
