#include <stdio.h>
struct location{
    int x;
    int y;
};
int main()
{
    char map[12][12];
    struct location F,C;
    int i,j,total=0,w=0,q=0;
    int step[4][2]={
        {-1,0},{0,1},{1,0},{0,-1}
    };
    for(i=1;i<=10;i++)
    {
        scanf("%s",&map[i][1]);   
    }
    for(i=0;i<=11;i++) 
    {   
        map[0][i]='*',map[11][i]='*';
        map[i][0]='*',map[i][11]='*';
    }
    for( i=1;i<=10;i++) 
    {
        for(j=1;j<=10;j++)
        {
            if(map[i][j]=='C') C.x=i,C.y=j;
            if(map[i][j]=='F') F.x=i,F.y=j;
        }
    }
    while(1)
    {
        if(F.x==C.x&&F.y==C.y)
        {
            printf("%d",total);
            break;
        }
        if(total>300000)
        {
			printf("0");
            break;
        }
            if(map[F.x+step[w][0]][F.y+step[w][1]]!='*')
            {
                F.x+=step[w][0];
                F.y+=step[w][1];
            }    
            else
                w=(++w)%4;
            if(map[C.x+step[q][0]][C.y+step[q][1]]!='*')
            {
                C.x+=step[q][0];
                C.y+=step[q][1];
            }
            else
                q=(++q)%4;
        total++;
    }
    return 0;
}