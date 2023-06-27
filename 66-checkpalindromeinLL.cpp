#include <vector>
class Solution{
  public:
    
    
    bool checkpalindrome(vector<int> arr){
        int start=0;
        int end= arr.size()-1;
        
        while(start<=end){
            if(arr[start] == arr[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
      
    bool isPalindrome(Node *head)
    {
       vector<int> arr;
       Node* temp =head;
       
       while(temp != NULL){
           arr.push_back(temp->data);
           temp= temp->next;
       }
       
      return checkpalindrome(arr);
       
       
    }
};
