#include<Stdio.h>
int main() {
	int l,a;
	scanf("%d %d", &l, &a);
	int total_pages=(l+a-1)/a;

	printf("%d", total_pages);

	return 0;
}
