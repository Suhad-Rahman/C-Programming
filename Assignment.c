#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int palindrome_suhad(int i);
void sort_suhad(int e, int a[]);
void character_freq_suhad(int t);

int main() {
	while(1) {
		int n, i;
		printf("\n\n1. Find Palindrome Number in a Given Range.");
		printf("\n2. Sort an Array of Random Numbers.");
		printf("\n3. Analyze Strings for Character Properties.");
		printf("\n4. Exit the Program!!");
		printf("\n\nEnter Operation : ");
		scanf("%d", &n);

		if(n==4) {
			printf("Thank You & Good Bye!!");
			break;
		}

		switch(n) {
		case 1: {
			int high, low, x;
			printf("\nEnter Low= ");
			scanf("%d", &low);
			printf("\nEnter High= ");
			scanf("%d", &high);

			for(i=low; i<=high; i++) {
				//Call the Function to check palindrome and return
				x= palindrome_suhad(i);

				if(x!=-1) {
					printf("%d is a Palindrome Number!\n", x);
				}
			}
			break;
		}
		case 2: {
			int e;
			printf("Enter The Number of Elements= ");
			scanf("%d", &e);

			srand(time(0));
			int *a = (int *)malloc(e * sizeof(int));
			printf("\nInitial Array--> ");
			for(i=0; i<e; i++) {
				a[i]=rand()%101;
				printf("%d ", a[i]);
			}
			//Call the function to sort and print
			sort_suhad(e, a);
			
			free(a);

			break;
		}
		case 3: {
			int t;
			printf("Enter the number of Strings= ");
			scanf("%d", &t);

			character_freq_suhad(t);

			break;
		}
		default:
			printf("\nEnter the Correct Operation Number\n");
			break;
		}

	}

	return 0;
}

int palindrome_suhad(int i) {
	int clone, rem, res=0;
	clone=i;
	while(clone!=0) {
		rem=clone%10;
		res=res*10+rem;
		clone=clone/10;
	}
	if(res==i) {
		return res;
	}
	else {
		return -1;
	}

}

void sort_suhad(int e, int a[]) {
	int i, j, clone, flag;

	for(i=0; i<e; i++) {
		flag=0;
		for(j=0; j<e-1; j++) {
			if(a[j]>a[j+1]) {
				clone= a[j];
				a[j]= a[j+1];
				a[j+1]=clone;
				flag=1;
			}
		}
		if(flag==0) {
			break;
		}
	}
	printf("\n\nSorted Array--> ");
	for(i=0; i<e; i++) {
		printf("%d ", a[i]);
	}
	return;
}

void character_freq_suhad(int t) {
	int z, w, q;
	char v[502];
	getchar();
	while(t--) {
		int f[256]= {0};
		printf("\nEnter String = ");
		fgets(v, 502, stdin);
		v[strlen(v)-1]='\0';

		for(w=0; w<strlen(v); w++) {
			f[v[w]]++;
		}
		for(w=0; w<256; w++) {
			if(f[w]>0) {
				printf("%c appeared %d times\n", w, f[w]);
			}
		}
		for(q=0; q<256; q++) {
			if(f[q]==1) {
				printf("\n[Unique] Characters= %c", q);
			}
		}
		for(q=0; q<256; q++) {
			if(f[q]>1) {
				printf("\n\nDuplicate Characters= %c", q);
			}
		}

	}
	return;
}