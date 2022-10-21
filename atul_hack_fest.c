// This code use to remove vowel from given string
#include<stdio.h>
#include<string.h>
// function to print the zigzag traversal 
void zizagtraversal(struct Node* root) 
{ 
	

	// check if stack is empty if not assign false 
	bool lefttoright = true; 
	while (!currentlevel.empty()) { 

		// pop out of stack 
		struct Node* temp = currentlevel.top(); 
		currentlevel.pop(); 

		// if not null 
		if (temp) { 


			// store data according to current 
			// order. 
			if (lefttoright) { 
				if (temp->left) 
					nextlevel.push(temp->left); 
			} 
			else { 
				if (temp->right) 
					nextlevel.push(temp->right); 
			} 
		} 

		if (currentlevel.empty()) { 
			lefttoright = !lefttoright; 
			swap(currentlevel, nextlevel); 
		} 
	} 
} 
int main(){
    char str[30],str1[30];
    int len=0,i,j=0;
    gets(str);
    len=strlen(str);
    // printf("%d",len);
    for(i=0;i<=len;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
        str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            str1[i]=' ';
        }
        else{
            str1[j++]=str[i];
        }
    }
    str1[j]='\0';
    printf("%s",str1);
    return 0;    
}
