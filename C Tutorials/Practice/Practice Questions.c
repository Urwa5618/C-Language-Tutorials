//Question 1
//#include<stdio.h>
//int main(){
//	int i = 2;
//	while (i <= 20){
//		if (i%2==0){
//			printf("%d\n",i);
//		}
//		i++;
//	}
//	return 0;
//}
//Question 2
//#include<stdio.h>
//int main(){
//	int i;
//	for(i=10;i>0;i--){
//		printf("%d\n",i);
//	}
//	return 0;
//}
//Question 3
//#include<stdio.h>
//int main(){
//	int i;
//	for(i=0;i<=10;i++){
//		printf("%d\n",i);
//	}
//	return 0;
//}
//Question 4
//#include<stdio.h>
//int main(){
//	int n,i,a;
//	printf("Enter a number: ");
//	scanf("%d",&n);
//	for(i=1;i<=10;i++){
//		a = n * i;
//		printf("\n%d x %d = %d\n",n,i,a);
//	}
//	return 0;
//}
//Question 5
//#include <stdio.h>
//int main() {
//    int n, i = 1, Sum = 0;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    while(i <= n) {
//        Sum = Sum + i;
//        i++;
//    }
//    printf("Sum = %d\n", Sum);
//    return 0;
//}
//Question 6
//#include<stdio.h>
//int main(){
//	int n,fact=1,i;
//	printf("Enter a number: ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		fact =fact*i;
//	}
//	printf("%d",fact);
//	return 0;
//}
//Question 7
//#include<stdio.h>
//int main(){
//	int n,i=1;
//	while(i<=10){
//		n = i*i;
//		printf("%d\n",n);
//		i++;
//	}
//	return 0;
//}
//Question 8
//#include <stdio.h>
//int main() {
//    int n, count = 0;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    if(n == 0) {
//        count = 1;
//    } else {
//        if(n < 0)
//            n = -n;
//        while(n > 0) {
//            n = n / 100;
//            count++;
//        }
//    }
//    printf("Total digits = %d", count);
//    return 0;
//}
//Question 9
//#include <stdio.h>
//int main() {
//    int n, rev = 0, rem;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    while(n != 0) {
//        rem = n % 10;
//        rev = rev * 10 + rem;
//        n = n / 10;           
//    }
//    printf("Reversed number = %d", rev);
//    return 0;
//}
//Question 10
//#include<stdio.h>
//int main(){
//	int n,i;
//	printf("Enter a number:");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		if(i % 3 == 0 && i % 5 == 0){
//		printf("%d\n",i);
//		}
//	}
//	return 0;
//}

