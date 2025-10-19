/*Accept on Character from user and check whether that chaacter is vowel or not*/

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
bool CheckVowel(char CValue)
{
    CValue = tolower(CValue);
    if(CValue == 'a'|| 'e' || 'i' || 'o'|| 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int cValue = '\0';
    bool bRet = false;
    printf("Enter Charecter :\n");
    scanf("%c",&cValue);
    bRet = CheckVowel(cValue);
    if(bRet == true)
    {
        printf("VoWel");
    }
    else
    {
        printf("Consonent");
    }
    return 0;
}