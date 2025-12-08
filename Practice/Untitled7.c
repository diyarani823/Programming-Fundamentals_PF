#include <stdio.h>

void Recruitment() {
    int marks, experience;

    printf("Enter test marks: ");
    scanf("%d", &marks);

    printf("Enter experience (in years): ");
    scanf("%d", &experience);

    if (marks < 50) {
        printf("Sorry, you are not eligible for any position.\n");
    } 
    else if (marks >= 50 && marks < 60) {
        printf("Selected for Trainee Engineer.\n");
    } 
    else if (marks >= 60 && experience >= 1) {
        printf("Selected for Assistant Developer.\n");
    } 
    else if (marks >= 70 && experience >= 2) {
        printf("Selected for Associate Developer.\n");
    } 
    else {
        printf("Not eligible due to insufficient experience.\n");
    }
}

int main() {
    Recruitment();
    return 0;
}
