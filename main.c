

#define SIZE        3

int main(int argc, char *argv[])
{
    int test_score[SIZE];
    int i;
    int sum=0;
    
    printf("%i명 점수를 입력하세요\n", SIZE);  
    
    for (i=0;i<SIZE;i++)
    {
            scanf("%d", &test_score[i]);
            sum += test_score[i];
    }
    
    #if 0
    for (i=0;i<SIZE;i++)
    printf("grade[%i] = %i\n", i, test_score[i]);
    #endif
    printf("성적 평균 : %i\n", sum/SIZE);
    
  system("PAUSE");	
  return 0;
}
