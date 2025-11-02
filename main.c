

#define SIZE        3

int main(int argc, char *argv[])
{
    int i;
    int grade[SIZE];
    int score[SIZE];
    
    for (i=0;i<SIZE;i++)
    {
        grade[i] = rand()%100;
    }
     for (i=0;i<SIZE;i++)
    {
        score[i] = grade[i];
    }
    
    #if 1
    for (i=0;i<SIZE;i++)
        printf("grade[%i] = %i, grade[%i] = %i\n", i, grade[i], i, score[i]);
    #endif
    
  system("PAUSE");	
  return 0;
}
 
