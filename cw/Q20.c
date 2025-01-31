#include<stdio.h>
void main(){
    int n; //n= number of candidates
    float mm, pm, cm, tm; //mm=Marks in math, pm=Marks in physics, cm=marks in chemistry & tm=total marks
    printf("Enter the number of candidates: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter marks for Candidate %d:\n", i + 1);
        printf("Mathematics: ");
        scanf("%f", &mm);
        printf("Physics: ");
        scanf("%f", &pm);
        printf("Chemistry: ");
        scanf("%f", &cm);
        tm = mm + pm + cm;
        if ((mm >= 60 && pm >= 50 && cm >= 40 && tm >= 200) || (mm + pm >= 150)) {
            printf("Candidate %d is eligible for admission.\n", i + 1);
        } else {
            printf("Candidate %d is not eligible for admission.\n", i + 1);
        }
    }
}