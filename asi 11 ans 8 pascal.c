void printPascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;j++)
    {
        k=1;
        i=0;
        for(j>=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i && k)
            {
                printf("%d",combi(i-1,r));
                k=0;
                r++;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
