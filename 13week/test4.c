#include <stdio.h>
int main(){
    char search_for[8];
    printf("검색할 내용: ");
    scanf("%79s", search_for);
    search_for[strlen(search_for) -1] = '\0';
    find_track(search_for);
    return 0;
}