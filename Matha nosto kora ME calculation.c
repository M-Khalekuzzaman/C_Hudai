#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float g = 9.8,f,r,Cd = 0.86,Thita = 0.57735,t,m,H1,n,Q1;
    int H,W,N;
    printf("Enter your H value : ");
    scanf("%d",&H);
    printf("Enter your H1 value : ");
    scanf("%f",&H1);
    printf("Enter your N value : ");
    scanf("%d",&N);
    printf("Enter your W value : ");
    scanf("%d",&W);

    f = sqrt(2*g);
    //printf("%f\n",f);
    r = (8*Cd*f);
    //printf("%f\n",r);
    t = r*Thita;
    //printf("%f\n",t);
    m = t*pow(H1,2.5);
    //printf("%f\n",m);
    n = m/15;
    //printf("%f",n);
    Q1 = n;
    //printf("\nQ1 value : %f\n",Q1);



    float Pi,Po,D = 0.06,eta,V,Vo,Dm = 0.115,Cv = 0.99,x;
    float Phi,Nu,PhiU,Pu;
    Pi = g*Q1*H;
    //printf("Pi value : %f\n",Pi);
    Po = (3.1416*D*N*W)/(60000);
    //printf("Po value : %f\n",Po);
    eta = (Po/Pi)*100;
    printf("Eta : %.2f\n",eta);
    V = (3.1416*Dm*N)/60;
    //printf("V value : %f\n",V);
    x = sqrt(2*g*H);
    Vo = Cv*x;
    //printf("Vo value : %f\n",Vo);


    Phi = (V/Vo)*100;
    printf("Phi value : %f\n",Phi);
    Nu = N/(sqrt(H));
    printf("Nu value : %f\n",Nu);
    PhiU = Q1/(sqrt(H));
    printf("PhiU value : %f\n",PhiU);
    Pu = Po/(pow(H,1.5));
    printf("Pu value : %f\n",Pu);

    getch();
}
